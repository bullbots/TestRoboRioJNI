// Save as "HelloJNI.c"
#include <jni.h>        // JNI header provided by JDK
#include <iostream>      // C Standard IO Header
#include "HelloJNI.h"   // Generated
#include "BasicClass.h"
 
BasicClass basicClass;

// Implementation of the native method sayHello()
JNIEXPORT void JNICALL Java_frc_robot_HelloJNI_sayHello(JNIEnv *env, jobject thisObj) {
   std::cout << "Hello World from c++" << std::endl;
   std::cout << basicClass.Hello() << std::endl;
   return;
}