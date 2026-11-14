cmake_minimum_required(VERSION 3.15)
project(pybind_demo)

set(CMAKE_CXX_STANDARD 17)

set(pybind11_DIR "/root/.venv/lib/python3.10/site-packages/pybind11/share/cmake/pybind11")

# 用 pybind11 的 CMake 集成（推荐）
find_package(pybind11 REQUIRED)

#include_directories("/root/.venv/lib/python3.10/site-packages/pybind11/include")


pybind11_add_module(example example.cpp)
