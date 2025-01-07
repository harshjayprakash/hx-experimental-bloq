cmake_minimum_required(VERSION 3.10)

project(blok C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)
set(SOURCES
    "src/main.c"
)

add_definitions(/DUNICODE /D_UNICODE)
add_executable(${PROJECT_NAME} WIN32 ${SOURCES})

target_link_libraries(${PROJECT_NAME}
    user32.lib
)