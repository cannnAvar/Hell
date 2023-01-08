cmake_minimum_required(VERSION 3.0.0)
project(Hell VERSION 0.1.0)

set(PROJECT_DIR ${CMAKE_SOURCE_DIR})

set(PROJECT_INCLUDE_DIR ${PROJECT_DIR}/include)

set(PROJECT_SOURCE_DIR ${PROJECT_DIR}/src)

set(PROJECT_SOURCES 
        ${PROJECT_SOURCE_DIR}/main.cpp
        ${PROJECT_SOURCE_DIR}/vec.cpp
        )
set(PROJECT_LIB ${PROJECT_DIR}/vendor)
set(PROJECT_LIB_INCLUDES 
        ${PROJECT_LIB_INCLUDES}/spdlog/include)

set(PROJECT_HEADERS 
        ${PROJECT_INCLUDE_DIR}/vec.hpp
        )

include_directories(${PROJECT_INCLUDE_DIR} ${PROJECT_LIB_INCLUDES})

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})


