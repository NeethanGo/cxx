cmake_minimum_required(VERSION 2.8.3)
project(hello)

# Add header file include directories
include_directories(./include)

# Add block directories
set(SRC  src/max.cpp  )

# Target
add_executable(hello main.cpp ${SRC} )