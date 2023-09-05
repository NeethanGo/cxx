cmake_minimum_required(VERSION 3.0)
project(map)

set(CMAKE_CXX_STANDARD 11)

# 将编译警告视为错误
# 增加编译器优化等级（例如，-O2）,若使用gdb调试则不能开启优化编译
# 启用调试信息 -g
add_compile_options(-Werror -g)

# 设置构建类型为Debug
set(CMAKE_BUILD_TYPE Debug)

# Add header file include directories
include_directories(./include)

# Add block directories
set(SRC person.cpp)

# Target
add_executable(map main.cpp ${SRC} )
