/** DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include <math.h>
#include "org_ice1000_public_functions.h"
/** Header for class org_ice1000_util_Math */

#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"

#ifndef _Included_org_ice1000_util_Math
#define _Included_org_ice1000_util_Math

#ifdef __cplusplus
extern "C" {
#endif /// __cplusplus

#undef org_ice1000_util_Math_E
#define org_ice1000_util_Math_E 2.718281828459045

#undef org_ice1000_util_Math_PI
#define org_ice1000_util_Math_PI 3.141592653589793

/// 0x5F3759DF thank you Carmack
#undef org_ice1000_util_Math_MAGIC_NUMBER
#define org_ice1000_util_Math_MAGIC_NUMBER 1597463007L

/**
 * Class:     org_ice1000_util_Math
 * Method:    gcd
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_ice1000_util_Math_gcd(
		JNIEnv *,
		jclass,
		jlong,
		jlong
);

/**
 * Class:     org_ice1000_util_Math
 * Method:    sqrt
 * Signature: (D)D
 */
JNIEXPORT jdouble JNICALL Java_org_ice1000_util_Math_sqrt(
		JNIEnv *,
		jclass,
		jdouble
);

/**
 * Class:     org_ice1000_util_Math
 * Method:    sqrtStrict
 * Signature: (D)D
 */
JNIEXPORT jdouble JNICALL Java_org_ice1000_util_Math_sqrtStrict(
		JNIEnv *,
		jclass,
		jdouble
);

/**
 * Class:     org_ice1000_util_Math
 * Method:    sin
 * Signature: (D)D
 */
JNIEXPORT jdouble JNICALL Java_org_ice1000_util_Math_sin(
		JNIEnv *,
		jclass,
		jdouble
);

/**
 * Class:     org_ice1000_util_Math
 * Method:    cos
 * Signature: (D)D
 */
JNIEXPORT jdouble JNICALL Java_org_ice1000_util_Math_cos(
		JNIEnv *,
		jclass,
		jdouble
);

/**
 * Class:     org_ice1000_util_Math
 * Method:    tan
 * Signature: (D)D
 */
JNIEXPORT jdouble JNICALL Java_org_ice1000_util_Math_tan(
		JNIEnv *,
		jclass,
		jdouble
);

/**
 * Class:     org_ice1000_util_Math
 * Method:    cot
 * Signature: (D)D
 */
JNIEXPORT jdouble JNICALL Java_org_ice1000_util_Math_cot(
		JNIEnv *,
		jclass,
		jdouble
);

/**
 * Class:     org_ice1000_util_Math
 * Method:    csc
 * Signature: (D)D
 */
JNIEXPORT jdouble JNICALL Java_org_ice1000_util_Math_csc(
		JNIEnv *,
		jclass,
		jdouble
);

/**
 * Class:     org_ice1000_util_Math
 * Method:    sec
 * Signature: (D)D
 */
JNIEXPORT jdouble JNICALL Java_org_ice1000_util_Math_sec(
		JNIEnv *,
		jclass,
		jdouble
);


/*
 * Class:     org_ice1000_util_Math
 * Method:    fastPlus
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_ice1000_util_Math_fastPlus(
    JNIEnv *,
    jclass,
    jlong,
    jlong,
    jlong
);

/*
 * Class:     org_ice1000_util_Math
 * Method:    fastPower
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_ice1000_util_Math_fastPower(
    JNIEnv *,
    jclass,
    jlong,
    jlong,
    jlong
);


#ifdef __cplusplus
}
#endif /// __cplusplus

#endif /// _Included_org_ice1000_util_Math

#pragma clang diagnostic pop
