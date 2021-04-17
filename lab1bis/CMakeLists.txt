cmake_minimum_required(VERSION 3.19)
project(lab1bis)

set(CMAKE_CXX_STANDARD 20)

add_executable(lab1bis main.cpp Message.h Message.cpp DurationLogger.h DurationLogger.cpp MessageStore.cpp MessageStore.h)