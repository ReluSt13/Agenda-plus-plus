cmake_minimum_required(VERSION 3.20)
project(Agenda_plus_plus)

set(CMAKE_CXX_STANDARD 17)

add_executable(Agenda_plus_plus
        main.cpp agenda.cpp agenda.h item.cpp item.h List.cpp List.h exceptii.cpp exceptii.h to_do_item.cpp to_do_item.h to_do_list.cpp to_do_list.h shopping_item.cpp shopping_item.h shopping_list.cpp shopping_list.h shoppingList_factory.h)

if(MSVC)
    target_compile_options(Agenda_plus_plus PRIVATE /W4 /permissive-)
else()
    target_compile_options(Agenda_plus_plus PRIVATE -Wall -Wextra -pedantic -g)
    if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
        target_compile_options(Agenda_plus_plus PRIVATE -stdlib=libstdc++)
    endif()
endif()