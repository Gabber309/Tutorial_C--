cmake_minimum_required(VERSION 3.22)
#[[ this is 
a long comment
for this code.]]
project(AlsParser VERSION 1.0.0 LANGUAGES CXX)

message("this is a message")
message(STATUS "this is a status message")

set(x hello)

message(STATUS "x is ${x}")

add_subdirectory("library") #aggiunge la cartella library come sottoprogetto

#[[ if (<conditon1>)
    # do something
elseif(<condition2>)
    # do another thing
else()
    # do default action
endif() ]]

# set(myFiles a.cpp b.cpp a.h)

#file(GLOB_RECURSE myfiles LIST_DIRECTORIES false ${PROJECT_SOURCE_DIR}/sub1/*.cpp ${PROJECT_SOURCE_DIR}/sub1/*.h) #ricerca ricorsiva
