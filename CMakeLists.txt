cmake_minimum_required(VERSION 3.8)
project(CTaskProject)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
#        datastruct.c
#        datastruct.h
        linkedlist.c
        linkedlist.h
#        main.c
#        main.h
        )


add_executable(CTaskProject ${SOURCE_FILES})