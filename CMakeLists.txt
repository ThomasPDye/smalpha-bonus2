cmake_minimum_required(VERSION 3.18)

project(smalpha_bonus2)

if (MSVC)
    # warning level 4 and all warnings as errors
    add_compile_options(/W4 /WX)
else()
    # lots of warnings and all warnings as errors
    add_compile_options(-Wall -Wextra -pedantic -Werror)
endif()

include_directories(${CMAKE_SOURCE_DIR}/include)

add_subdirectory(src)

enable_testing()
add_subdirectory(tests)
