cmake_minimum_required(VERSION 3.16.3)
project(MasterMind)

file(GLOB SOURCES "src/*.cpp")

add_executable(MasterMind ${SOURCES})