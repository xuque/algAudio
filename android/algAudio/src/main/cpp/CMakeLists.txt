cmake_minimum_required(VERSION 3.4.1)

project(algAudio)

set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -Wall -v -fPIC -Wl,--gc-sections -fvisibility=hidden -fvisibility-inlines-hidden -ffunction-sections -fdata-sections")

set(UNITY_BRIDGE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")

# 头文件目录
include_directories("${UNITY_BRIDGE_DIR}")

set(unity_bridge_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/src/UnityBridge.c)

set(metabot_native_jni_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/jni/JniHelper.c)

add_library(algAudio SHARED
            ${unity_bridge_SOURCES}
            ${metabot_native_jni_SOURCES})

find_library(LOG_LIB log)
target_link_libraries(algAudio ${LOG_LIB})
