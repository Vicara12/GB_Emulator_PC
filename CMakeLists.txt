cmake_minimum_required(VERSION 3.14)

project(GBEmuPC VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(SFML 2.5 COMPONENTS graphics audio window system REQUIRED)
add_subdirectory(external/emu_core)

file(GLOB_RECURSE FRONTEND_SOURCES "src/*.cpp" "src/*.h")
add_executable(gbEmuPC ${FRONTEND_SOURCES})

target_link_libraries(gbEmuPC 
    PRIVATE 
        gb_core 
        sfml-graphics
        sfml-audio
        sfml-window
        sfml-system
)

if(CMAKE_CXX_COMPILER_ID MATCHES "Clang|GNU")
    target_compile_options(gbEmuPC PRIVATE -Wall -Wextra -O3 -Werror)
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(gbEmuPC PRIVATE /W4 /O2 /WX)
endif()