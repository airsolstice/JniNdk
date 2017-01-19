//
// Created by Administrator on 2016/9/5 0005.
//


#include "com_admin_jn_JniUtils.h"


JNIEXPORT jstring JNICALL Java_com_admin_jn_JniUtils_getString
        (JNIEnv *env, jobject obj){
    return (*env)->NewStringUTF(env,"这里是来自c的string");
}


