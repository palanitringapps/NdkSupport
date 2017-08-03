#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_ndksupport_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
/*JNIEXPORT jinteger JNICALL
Java_com_ndksupport_MainActivity_integerFromJNI(
JNIEnv* env,
jobject *//* this *//*) {
std::string hello = "Hello from C++";
return env->NewStringUTF(hello.c_str());
}*/
