cmake_minimum_required(VERSION 3.10)
project(Nox)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(external/glm)

include_directories(
        include
        external/glm
)

set(SOURCE_FILES
        main.cc
        include/common.h
        include/core/platform.h
        include/math/vectors.h

        include/math/matrix.h include/core/file.h include/core/system.h src/core/system.cc include/gfx_api/vertex_description.h)

add_executable(Nox ${SOURCE_FILES})