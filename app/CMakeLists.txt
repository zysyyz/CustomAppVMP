# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.4.1)

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds them for you.
# Gradle automatically packages shared libraries with your APK.

add_library(
             native-lib
             SHARED
             src/main/cpp/dalvik/CardTable.cpp
             src/main/cpp/dalvik/Allocc.cpp
             src/main/cpp/dalvik/Array.cpp
             src/main/cpp/dalvik/Class.cpp
             src/main/cpp/dalvik/Exception.cpp
             src/main/cpp/dalvik/Interp.cpp
             src/main/cpp/dalvik/Stack.cpp
             src/main/cpp/dalvik/Sync.cpp
             src/main/cpp/dalvik/Resolve.cpp
             src/main/cpp/dalvik/Thread.cpp
             src/main/cpp/dalvik/TypeCheck.cpp
             src/main/cpp/dalvik/atomic.cpp
             src/main/cpp/dalvik/avmp.cpp
             src/main/cpp/dalvik/BitConvert.cpp
             src/main/cpp/dalvik/DexOpcodes.cpp
             src/main/cpp/dalvik/InlineNative.cpp
             src/main/cpp/dalvik/InterpC.cpp
             src/main/cpp/dalvik/Utils.cpp
              )

# Searches for a specified prebuilt library and stores the path as a
# variable. Because CMake includes system libraries in the search path by
# default, you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.

find_library( # Sets the name of the path variable.
              log-lib

              # Specifies the name of the NDK library that
              # you want CMake to locate.
              log )

# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.

target_link_libraries( # Specifies the target library.
                       native-lib
                       z
                       dl
                       # Links the target library to the log library
                       # included in the NDK.
                       ${log-lib} )