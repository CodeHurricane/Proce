
#include <stdio.h>
#include <unistd.h>
#include "jni.h"
#include "inso.h"
#include <android/log.h>
JNIEXPORT void JNICALL
Java_com_example_user_simple_1process_1inject_MainActivity_statr(JNIEnv *env, jobject instance) {

    // TODO
    __android_log_print(ANDROID_LOG_DEBUG,"DEMO1","DEMO1 start");
    while(1){
        __android_log_print(ANDROID_LOG_DEBUG,"DEMO1","%d",getA());
        setA(getA() + 1);
        sleep(2);
    }
}
