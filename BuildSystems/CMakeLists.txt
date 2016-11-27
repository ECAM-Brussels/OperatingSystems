# Author: Sébastien Combéfis
# Version: November 27, 2016

cmake_minimum_required(VERSION 2.8.9)
project (computer)

file(GLOB SOURCES "src/*.c")

add_executable(computer ${SOURCES})
target_compile_options(computer PUBLIC -I. -O2 -pedantic -pipe -std=c99 -Wall -Werror)
