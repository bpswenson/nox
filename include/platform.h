//
// Created by brian on 3/20/18.
//

#pragma once

#if defined(_WIN32) || defined(__WIN32__) || defined(WIN32)
#define PLATFORM_WINDOWS 1
#define PLATFORM_POSIX  0
#elif defined(linux) || defined(__linux) || defined(__linux__) && !defined(__ANDROID__)
#define PLATFORM_LINUX  1
#define PLATFORM_POSIX  1
#elif defined(__APPLE__)
#   define PLATFORM_POSIX   1
#   include <TargetConditionals.h>
#   include <AvailabilityMacros.h>
#   if TARGET_OS_IPHONE
#       define PLATFORM_IPHONE 1
#       if TARGET_IPHONE_SIMULATOR
#           define PLATFORM_SIMULATOR 1
#       else
#            define PLATFORM_SIMULATOR 0
#       endif
#   else
#       define PLATFORM_MAC 1
#   endif
#elif defined(__ANDROID__) && (defined(linux) || defined(__linux__))
#   define PLATFORM_POSIX   1
#   define PLATFORM_ANDROID
#   #include <android/api-level.h>
#else
#   error "No idea what the fuck you're attemping to compile me on"
#endif

#ifndef PLATFORM_WINDOWS
#define PLATFORM_WINDOWS    0
#endif

#ifndef PLATFORM_POSIX
#define PLATFORM_POSIX      0
#endif

#ifndef PLATFORM_LINUX
#define PLATFORM_LINUX      0
#endif

#ifndef PLATFORM_MAC
#define PLATFORM_MAC        0
#endif

#ifndef TARGET_OS_IPHONE
#define TARGET_OS_IPHONE    0
#endif

#ifndef PLATFORM_SIMULATOR
#define PLATFORM_SIMULATOR  0
#endif

#ifndef PLATFORM_ANDROID
#define PLATFORM_ANDROID    0
#endif

