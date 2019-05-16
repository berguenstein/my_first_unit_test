cmake_minimum_required(VERSION 3.13)
project(tester_behaviour C)

set(CMAKE_C_STANDARD 99)

add_executable(tester_behaviour main.c unity/unity.c test_operations.c ../HW_behaviour/operations.c)