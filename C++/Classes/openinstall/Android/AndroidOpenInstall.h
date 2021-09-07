//
// Created by Wenki on 2018/6/5.
//

#ifndef ANDROID_ANDROIDOPENINSTALL_H
#define ANDROID_ANDROIDOPENINSTALL_H

#include "../AppData.h"
#include "../AdConfig.h"

using namespace openInstall2dx;

class AndroidOpenInstall {

public:

    static void config(AdConfig adConfig);

    static void init(bool permission);

    static void getInstall(float s, void (*installCallback)(AppData appData));

    static void registerWakeUpHandler(void (*wakeupCallback)(AppData appData));

    static void reportRegister();

    static void reportEffectPoint(const char *poindId, long pointValue);

};

#endif //ANDROID_ANDROIDOPENINSTALL_H
