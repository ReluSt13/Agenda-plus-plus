cmake_minimum_required(VERSION 3.20)
project(Agenda_plus_plus)

set(CMAKE_CXX_STANDARD 14)

add_executable(Agenda_plus_plus
        main.cpp agenda.cpp agenda.h item.cpp item.h to_do_list.cpp to_do_list.h)
