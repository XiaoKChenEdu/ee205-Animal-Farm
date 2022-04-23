cmake_minimum_required(VERSION 3.22)
project(ee205-Animal-Farm)

set(CMAKE_CXX_STANDARD 14)

add_executable(ee205-Animal-Farm main.cpp config.cpp config.h classCat.cpp classCat.h enumClassGender.h enumClassColor.h classNode.cpp classNode.h classList.cpp classList.h classSinglyLinkedList.cpp classSinglyLinkedList.h classWeight.cpp classWeight.h classAnimal.cpp classAnimal.h classMammal.cpp classMammal.h debug.cpp debug.h)
