/*************************************************************************************
* qTESLA: an efficient post-quantum signature scheme based on the R-LWE problem
*
* Abstract: provably-secure qTESLA parameters
**************************************************************************************/

#ifndef PARAMS_H
#define PARAMS_H

#if defined(_qTESLA_p_I_)

#define PARAM_N 1024
#define PARAM_N_LOG 10
#define PARAM_SIGMA 8.5
#define PARAM_Xi 10
#define PARAM_Q 485978113
#define PARAM_Q_LOG 29
#define PARAM_QINV 3421990911
#define PARAM_BARR_MULT 1
#define PARAM_BARR_DIV 29
#define PARAM_B 2097151
#define PARAM_B_BITS 21
#define PARAM_S_BITS 8
#define PARAM_K 4
#define PARAM_SIGMA_E PARAM_SIGMA
#define PARAM_H 25
#define PARAM_D 22
#define PARAM_GEN_A 108	
#define PARAM_KEYGEN_BOUND_E 554
#define PARAM_REJECTION PARAM_KEYGEN_BOUND_E
#define PARAM_KEYGEN_BOUND_S 554
#define PARAM_U PARAM_KEYGEN_BOUND_S
#define PARAM_R2_INVN 472064468
#define SHAKE shake128
#define cSHAKE cshake128_simple
#define SHAKE_RATE SHAKE128_RATE

#elif defined(_qTESLA_p_III_)

#define PARAM_N 2048
#define PARAM_N_LOG 11
#define PARAM_SIGMA 8.5
#define PARAM_Xi 10
#define PARAM_Q 1129725953
#define PARAM_Q_LOG 31
#define PARAM_QINV 861290495
#define PARAM_BARR_MULT 15
#define PARAM_BARR_DIV 34
#define PARAM_B 8388607
#define PARAM_B_BITS 23
#define PARAM_S_BITS 8
#define PARAM_K 5
#define PARAM_SIGMA_E PARAM_SIGMA
#define PARAM_H 40
#define PARAM_D 24
#define PARAM_GEN_A 180	
#define PARAM_KEYGEN_BOUND_E 901
#define PARAM_REJECTION PARAM_KEYGEN_BOUND_E
#define PARAM_KEYGEN_BOUND_S 901
#define PARAM_U PARAM_KEYGEN_BOUND_S
#define PARAM_R2_INVN 851423148
#define SHAKE shake256
#define cSHAKE cshake256_simple
#define SHAKE_RATE SHAKE256_RATE

#endif

#endif
