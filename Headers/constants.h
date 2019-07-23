//
// Created by pitersk on 23.10.18.
//

#ifndef RPIANC_CONSTANTS_H
#define RPIANC_CONSTANTS_H


#include "common.h"

const size_t NR_OF_CHANNELS = 2;
const long unsigned int FILTER_LENGTH = 128;
const long unsigned int FX_FILTER_LENGTH = 156;
const float LMS_LEAK_FACTOR = 0.9999f;
const sample_type LMS_STEP_SIZE = 0.1f;
const sample_type SEC_PATH_LMS_STEP_SIZE = 0.000001f;
const float DC_REDUCTION_VALUE = 0.0f;
const float INPUT_SCALING = 2.0f;
const float OUTPUT_GAIN = 2.0f;
const float DC_REMOVAL_ALPHA = 0.95f;
const std::array<sample_type, FX_FILTER_LENGTH> FX_FILTER_COEFFS = {
        -0.00633615255355835
       , 0.0448853969573975
       , 0.0411900877952576
       , -0.0066370964050293
       , -0.0247259736061096
       , 0.00580191612243652
       , -0.0055316686630249
       , -0.0332271456718445
       , 0.00503140687942505
       , 0.0208697319030762
       , 0.0300486087799072
       , 0.0813455581665039
       , 0.0156700611114502
       , -0.0835670828819275
       , 0.00986367464065552
       , 0.0944638848304749
       , -0.0149027705192566
       , -0.0655035376548767
       , 0.0710809230804443
       , 0.128612339496613
       , 0.040239155292511
       , -0.00696521997451782
       , -0.00221335887908936
       , -0.000689446926116943
       , -0.000697791576385498
       , 3.65376472473145E-05
       , 4.25577163696289E-05
       , -0.000530421733856201
       , -0.000351071357727051
       , -0.000135958194732666
       , -0.000351905822753906
       , -0.000579476356506348
       , -0.00043189525604248
       , -0.00011974573135376
       , -2.1815299987793E-05
       , -0.000144422054290771
       , -0.000831425189971924
       , -0.000305056571960449
       , -0.0001106858253479
       , -0.00010073184967041
       , -0.000369250774383545
       , -0.000355243682861328
       , 7.46250152587891E-05
       , -0.000204205513000488
       , -0.000513672828674316
       , 3.93390655517578E-06
       , 0.000393807888031006
       , 4.92334365844727E-05
       , 0.000264585018157959
       , 0.000648140907287598
       , 0.000287473201751709
       , -0.000306010246276855
       , 0.000226140022277832
       , 0.000437140464782715
       , -0.000187873840332031
       , -0.000331103801727295
       , -0.000121653079986572
       , -0.000110030174255371
       , -0.000397324562072754
       , -2.33054161071777E-05
       , 0.000265598297119141
       , 0.000590324401855469
       , 0.000581502914428711
       , -7.59363174438477E-05
       , 0.000359892845153809
       , 0.000562608242034912
       , 5.84125518798828E-06
       , -0.00113183259963989
       , -0.000262856483459473
       , 0.000358998775482178
       , -0.000116646289825439
       , -0.000692605972290039
       , 0.000479042530059814
       , 0.000160813331604004
       , -0.000438809394836426
       , -0.000541388988494873
       , -4.75645065307617E-05
       , 2.47359275817871E-05
       , -0.000357329845428467
       , -0.000524222850799561
       , -0.000396609306335449
       , -0.000153779983520508
       , -0.000353455543518066
       , -0.00024878978729248
       , -0.000117301940917969
       , 0.000111281871795654
       , -0.000682950019836426
       , -0.000554442405700684
       , -0.000215053558349609
       , -0.000334441661834717
       , -0.000584423542022705
       , -0.000481843948364258
       , 0.000481605529785156
       , 0.000335872173309326
       , -0.000769615173339844
       , -0.000497937202453613
       , 8.34465026855469E-06
       , -0.000611007213592529
       , -0.00124841928482056
       , -0.00107753276824951
       , -0.000160753726959229
       , -0.000637948513031006
       , -0.00076061487197876
       , -0.000217735767364502
       , 6.11543655395508E-05
       , -0.000556588172912598
       , -0.00125515460968018
       , -0.00123244524002075
       , -0.00056988000869751
       , -0.00107318162918091
       , -0.00105726718902588
       , -0.000510752201080322
       , -8.69631767272949E-05
       , -0.000314176082611084
       , -0.00118976831436157
       , -0.000701546669006348
       , -0.000424325466156006
       , -0.00105172395706177
       , -0.0011170506477356
       , -0.000692844390869141
       , -0.000233471393585205
       , -0.00049203634262085
       , -0.000693082809448242
       , -0.000413417816162109
       , 4.46438789367676E-05
       , -0.000405073165893555
       , -0.000935077667236328
       , -0.000842630863189697
       , -0.0009041428565979
       , -0.00106543302536011
       , -0.000939786434173584
       , -0.00066763162612915
       , -0.000339150428771973
       , -0.000471532344818115
       , -0.000543415546417236
       , -0.000902771949768066
       , -0.000313639640808105
       , -0.000531852245330811
       , -0.000909030437469482
       , -0.000460922718048096
       , -0.000437557697296143
       , -0.000468671321868896
       , -0.000608503818511963
       , -0.000261962413787842
       , -0.000361382961273193
       , -0.000296235084533691
       , -0.000304222106933594
       , -0.000425994396209717
       , -0.000358700752258301
       , -0.000232577323913574
       , 1.54972076416016E-06
       , 0.000621914863586426
       , 0.000323116779327393
       , 0.000142872333526611
       , 0.000237762928009033
       , 0.000261008739471436
};

const size_t PLAY_FRAMES_PER_PERIOD = 24;
const size_t PLAY_PERIODS_PER_BUFFER = 128;
const size_t CAP_FRAMES_PER_PERIOD = 24;
const size_t CAP_PERIODS_PER_BUFFER = 128;
const size_t BUFFER_SAMPLE_SIZE = CAP_FRAMES_PER_PERIOD*NR_OF_CHANNELS;

const size_t RESAMPLE_FILTER_LENGTH = 25;

const std::array<sample_type, RESAMPLE_FILTER_LENGTH> RESAMPLE_FILTER_COEFFS = {
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
