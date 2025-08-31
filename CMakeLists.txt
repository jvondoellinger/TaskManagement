cmake_minimum_required(VERSION 4.0)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled main.cpp
        main.cpp
        obj/task.cpp
        views/main_interaction_view.cpp
        task_store/task_store_service.cpp
        task_store/itask_store_service.h
        obj/itask.h
)
