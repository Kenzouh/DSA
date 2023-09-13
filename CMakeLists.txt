cmake_minimum_required(VERSION 3.0.0)
project(DSA VERSION 0.1.0 LANGUAGES C)

include(CTest)
enable_testing()

# Define the C source files for your project
set(SOURCE_FILES
    Unit1/src/main.c
    Unit2/src/main.c  # Add more source files as needed
)

# Create an executable target for your project
add_executable(DSA ${SOURCE_FILES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
