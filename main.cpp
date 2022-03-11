#ifdef __ANDROID__

#include <android/log.h>

int main(){
    __android_log_print(ANDROID_LOG_VERBOSE, "bug_test", "this is the android build")

}


#endif



#ifdef _WIN32

#include <stdio.h>

int main(){

    printf("this is the windows build");
}


#endif