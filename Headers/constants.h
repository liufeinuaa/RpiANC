//
// Created by pitersk on 23.10.18.
//

#ifndef RPIANC_CONSTANTS_H
#define RPIANC_CONSTANTS_H


#include "common.h"

const std::string RPI_CAPTURE_DEVICE_NAME = "hw:CARD=sndrpisimplecar,DEV=0";
const std::string RPI_PLAYBACK_DEVICE_NAME = "plughw:CARD=ALSA,DEV=0";
const size_t NR_OF_CHANNELS = 2;
const long unsigned int FILTER_LENGTH = 256;
const long unsigned int FX_FILTER_LENGTH = 156;
const float LMS_LEAK_FACTOR =0.99999f;
const sample_type LMS_STEP_SIZE = 0.1f;
const sample_type SEC_PATH_LMS_STEP_SIZE = 0.01f;
const float DC_REDUCTION_VALUE = 0.0f;
const float INPUT_SCALING = 1.0f;
const float OUTPUT_GAIN = 1.0f;
const float DC_REMOVAL_ALPHA = 0.95f;
const std::array<sample_type, FX_FILTER_LENGTH> FX_FILTER_COEFFS = {
        0.345302,
        0.683373,
        0.176932,
        -0.452794,
        -0.651889,
        -0.33432,
        0.430206,
        0.698004,
        0.356404,
        0.0944525,
        -0.0499638,
        -0.119905,
        -0.138429,
        0.116704,
        0.318548,
        0.338593,
        0.021303,
        -0.184513,
        0.0767772,
        -0.0665727,
        -0.715992,
        -0.611427,
        -0.0450933,
        0.239695,
        0.45418,
        0.21111,
        -0.268336,
        -0.0785289,
        0.050718,
        -0.526435,
        -0.540151,
        0.194527,
        0.489319,
        0.352763,
        0.158402,
        -0.0617124,
        0.0607672,
        -0.0647844,
        -0.516943,
        -0.366613,
        0.43523,
        0.524406,
        0.326241,
        0.351112,
        -0.124567,
        -0.777712,
        -0.651766,
        -0.170451,
        0.0366202,
        0.158714,
        0.232643,
        0.361751,
        0.210026,
        -0.171742,
        -0.135676,
        -0.0852073,
        -0.222128,
        0.065206,
        0.26377,
        0.0718619,
        -0.0816914,
        -0.0392655,
        -0.164945,
        -0.442116,
        -0.387631,
        0.0358813,
        0.169429,
        0.130428,
        0.416209,
        0.405907,
        0.185134,
        -0.0376437,
        -0.279659,
        -0.0044018,
        0.302113,
        0.21685,
        -0.0201968,
        -0.105836,
        0.372919,
        0.359775,
        -0.443481,
        -0.261324,
        0.601675,
        0.242048,
        -0.147167,
        0.0573026,
        0.20874,
        -0.029432,
        -0.467893,
        -0.140113,
        0.399198,
        0.316514,
        0.141148,
        -0.269053,
        -0.590902,
        -0.290009,
        0.133142,
        0.353649,
        0.178693,
        -0.0110423,
        0.33836,
        0.182998,
        -0.0892586,
        -0.212223,
        -0.563609,
        -0.299875,
        0.376895,
        0.00999058,
        -0.372866,
        -0.0451162,
        -0.0602915,
        -0.543076,
        -0.29766,
        0.307653,
        0.17345,
        -0.421359,
        -0.309309,
        0.0378623,
        0.0409656,
        0.149584,
        0.308251,
        0.164059,
        -0.15561,
        -0.0991165,
        0.0210295,
        -0.115755,
        -0.138937,
        -0.0763908,
        0.0348131,
        0.321904,
        0.439538,
        0.284424,
        -0.235972,
        -0.202462,
        0.395735,
        0.351427,
        0.0941831,
        0.0865973,
        0.0208394,
        0.100534,
        0.109982,
        -0.11517,
        0.0665898,
        0.310889,
        -0.0692513,
        -0.0207432,
        0.232537,
        -0.0486973,
        -0.359555,
        0.0042668,
        0.57208,
        0.211767,
        -0.680732,
        -0.346352,
        0.388866,
        -0.127926
};

const size_t PLAY_FRAMES_PER_PERIOD = 24;
const size_t PLAY_PERIODS_PER_BUFFER = 128;
const size_t CAP_FRAMES_PER_PERIOD = 24;
const size_t CAP_PERIODS_PER_BUFFER = 128;
const size_t BUFFER_SAMPLE_SIZE = CAP_FRAMES_PER_PERIOD*NR_OF_CHANNELS;
const size_t ANTYALIAS_FILTER_LENGTH = 25;

const std::array<sample_type, ANTYALIAS_FILTER_LENGTH> ANTYALIAS_FILTER_COEFFS = {
        -0.003435686952890325
       , -0.01751077870060456
       , -0.026279252493397534
       , -0.03867294334125027
       , -0.04489853867141257
       , -0.04129849881990903
       , -0.02369414288555558
       , 0.008689449583268304
       , 0.0528611827566588
       , 0.10205535788333459
       , 0.14711173575981126
       , 0.1787700475772505
       , 0.19016556471025275
       , 0.1787700475772505
       , 0.14711173575981126
       , 0.10205535788333459
       , 0.0528611827566588
       , 0.008689449583268304
       , -0.02369414288555558
       , -0.04129849881990903
       , -0.04489853867141257
       , -0.03867294334125027
       , -0.026279252493397534
       , -0.01751077870060456
       , -0.003435686952890325
};



#endif //RPIANC_CONSTANTS_H
