#include <jni.h>
#include <string.h>
#include <dlfcn.h>
#include  "android/log.h"
extern "C" {
JNIEXPORT void JNICALL
Java_com_example_user_simple_1process_1inject_MainActivity_inject(JNIEnv *env, jobject instance) {

    void *handle = dlopen("native-lib.so", RTLD_NOW);
    void (*setA_func)(int) = (void (*)(int)) dlsym(handle, "setA");
    if (setA_func) {
        setA_func(999);
    }
}
}