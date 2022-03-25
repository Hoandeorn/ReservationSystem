cmake_minimum_required(VERSION 3.21)
project(ReservationSystem)

set(CMAKE_CXX_STANDARD 14)

add_executable(ReservationSystem
        main.cpp Identity.cpp Identity.h Student.cpp Student.h Teacher.cpp Teacher.h Administrator.cpp Administrator.h globalFile.h Precedure.h Precedure.cpp)
