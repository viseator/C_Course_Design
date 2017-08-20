cmake_minimum_required(VERSION 3.8)
project(CTaskProject)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        data.c
        data.h
        linkedlist.c
        linkedlist.h
        utils.c utils.h)


add_executable(CTaskProject ${SOURCE_FILES})