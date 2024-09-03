cmake_minimum_required(VERSION 3.29)
project(DeitelCpp)
set(LIBRARY_SOURCE_PATH "/Users/petersims/CppLibraries")

set(CMAKE_CXX_STANDARD 26)

add_executable(DeitelCpp src/main.cpp
        course/videos/CPlusPlus20FundamentalsLiveLessons/examples/lesson09/fig09_13-15/fig09_15.cpp
        course/videos/CPlusPlus20FundamentalsLiveLessons/examples/lesson09/fig09_13-15/CreateAndDestroy.cpp


)

include_directories(
        "${LIBRARY_SOURCE_PATH}/boost_1_84_0"
        "${LIBRARY_SOURCE_PATH}/rapidcsv/src"
        "${LIBRARY_SOURCE_PATH}/GSL/include"
        "${LIBRARY_SOURCE_PATH}/cereal-1.3.0/include"

)

# extra module support
#set(CMAKE_CXX_FLAGS "-fmodules -stdlib=libc++")