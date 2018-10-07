#include <iostream>
#include <fstream>
#include <vector>
#include "../Headers/capture.h"
#include "../Headers/playback.h"
#include "Fir1fixed.h"
#include "../Headers/processing.h"

int main() {

    std::ifstream ref_mic;
    std::ifstream err_mic;

    ref_mic.open("rec/ref_mic.dat", std::ios::binary);
    err_mic.open("rec/err_mic.dat", std::ios::binary);
    std::vector<fixed_sample_type> err_vec;
    std::vector<fixed_sample_type> ref_vec;
    std::vector<fixed_sample_type> corr_vec;

//    const std::string capture_device_name = "default";
//    const std::string playback_device_name = "default";
//    const std::string capture_device_name = "plughw:CARD=sndrpisimplecar,DEV=0";
//    const std::string playback_device_name = "plughw:CARD=ALSA,DEV=0";

    snd_pcm_t *cap_handle;
    unsigned int play_freq = 44100;
    unsigned int number_of_channels = 2;
    snd_pcm_uframes_t cap_period_size = 64;

    snd_pcm_uframes_t buffer_length = cap_period_size * number_of_channels;
    fixed_sample_type buffer[buffer_length];


    snd_pcm_t *play_handle;
    snd_pcm_uframes_t play_buffer_size = 1024;
    snd_pcm_uframes_t play_period_size = 64;

    init_playback(&play_handle, &play_freq, &play_period_size,
                  &play_buffer_size, number_of_channels, playback_device_name);


//    Fir1fixed fir_left("../coeff12bit.dat", 12);
//    Fir1fixed fir_right("../coeff12bit.dat", 12);

    int sample = 0;

    while (sample < 10000) {
        ++sample;
        capture(cap_handle, buffer, cap_period_size);
        for (int i = 0; i < buffer_length; ++i)
            if (i % 2)
                err_vec.push_back(buffer[i]);
            else
                ref_vec.push_back(buffer[i]);
        processing(buffer, buffer_length);
        for (int i = 0; i < buffer_length; ++i)
            if (i % 2)
                corr_vec.push_back(buffer[i]);
//        for(int i=0; i < buffer_length; ++i)
//            outfile2 << buffer[i] << std::endl;
        playback(play_handle, buffer, cap_period_size);
    }

    for(fixed_sample_type s : ref_vec)
        ref_mic.write((char*)&s, sizeof(fixed_sample_type));
    for(fixed_sample_type s : err_vec)
        err_mic.write((char*)&s, sizeof(fixed_sample_type));
    for(fixed_sample_type s : corr_vec)
        corr_sig.write((char*)&s, sizeof(fixed_sample_type));

    snd_pcm_drain(play_handle);
    snd_pcm_close(play_handle);
    corr_sig.close();
    ref_mic.close();
    err_mic.close();

    return 0;
}
