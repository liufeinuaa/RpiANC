
#include <iostream>
#include "../Headers/capture.h"
#include "../Headers/playback.h"
#include "Fir1fixed.h"
#include "../Headers/processing.h"


int main() {

    const std::string capture_device_name = "default";
    const std::string playback_device_name = "default";

//    const std::string capture_device_name = "plughw:CARD=sndrpisimplecar,DEV=0";
//    const std::string playback_device_name = "plughw:CARD=ALSA,DEV=0";

    snd_pcm_t *cap_handle;
    unsigned int play_freq = 44100;
    unsigned int number_of_channels = 2;
    snd_pcm_uframes_t cap_period_size = 64;

    init_capture(&cap_handle, &play_freq, &cap_period_size, number_of_channels,
                 capture_device_name);
    snd_pcm_uframes_t buffer_length = cap_period_size*number_of_channels;
    sample_type buffer[buffer_length];


    snd_pcm_t *play_handle;
    snd_pcm_uframes_t play_buffer_size = 1024;
    snd_pcm_uframes_t play_period_size = 64;

    init_playback(&play_handle, &play_freq, &play_period_size,
                  &play_buffer_size, number_of_channels, playback_device_name);


    Fir1fixed fir_left("../coeff12bit.dat", 12);
    Fir1fixed fir_right("../coeff12bit.dat", 12);

    while (true) {
        capture(cap_handle, buffer, cap_period_size);
        processing(buffer, buffer_length, fir_left, fir_right);
        playback(play_handle, buffer, cap_period_size);

    }

    snd_pcm_drain(play_handle);
    snd_pcm_close(play_handle);

    return 0;
}

