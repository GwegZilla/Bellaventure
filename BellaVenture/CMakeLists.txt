cmake_minimum_required(VERSION 3.16)

project(BellaVenture VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.2 COMPONENTS Core Quick REQUIRED)


add_subdirectory(code)

