cmake_minimum_required(VERSION 3.15)
project(HamsterRanch)

set(CMAKE_CXX_STANDARD 14)

add_executable(HamsterRanch main.cpp ElementFacturable.cpp ElementFacturable.h cmake-build-debug/FacturableFraisFixe.cpp cmake-build-debug/FacturableFraisFixe.h)