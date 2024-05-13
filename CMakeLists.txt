cmake_minimum_required(VERSION 3.28)
project(WoodPecker)

set(CMAKE_CXX_STANDARD 14)

include_directories(Src)

add_executable(WoodPecker
        SandBox/Src/SandBoxApp.cpp
        Src/Application.cpp
        Src/Application.h
        Src/Core.h
        Src/WoodPecker.h)
