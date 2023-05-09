cmake_minimum_required(VERSION 3.22)
#[[ this is 
a long comment
for this code.]]
project(AlsParser VERSION 1.0.0 LANGUAGES CXX)

message(STATUS "this is a message")

set(x hello) # set(b ${a}) 

message(STATUS "x is ${x}")

add_executable(classexample)
target_sources(classexample PRIVATE "class_example.cpp")


add_executable(main)
target_sources(main PRIVATE "main.cpp")
message(STATUS ${PROJECT_SOURCE_DIR})
target_include_directories(main PRIVATE "${PROJECT_SOURCE_DIR}")
add_subdirectory("library")
add_subdirectory("example")
install(TARGETS main)

# set(geo_DIR "../geo-install/lib/cmake/geo")
# find_package(geo)

# if (<conditon1>)
    # do something
# elseif(<condition2>)
    # do another thing
# else()
    # do default action
# endif()

# set(myFiles a.cpp b.cpp a.h)

# file(GLOB_RECURSE myfiles LIST_DIRECTORIES false ${PROJECT_SOURCE_DIR}/sub1/*.cpp ${PROJECT_SOURCE_DIR}/sub1/*.h)