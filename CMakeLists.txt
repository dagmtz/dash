cmake_minimum_required(VERSION 4.0)

# Project name
project("dash" VERSION 0.1)

# Product filename
set(PRODUCT_NAME dash)

# Directory for includes
set(INC_DIR ../inc)

# Directory for object files
set(OBJ_DIR results)

# Output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OBJ_DIR})

# Generate compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Pass defines to compiler
add_definitions(
)

add_compile_options(
    -std=gnu99 # C99 standard
    -Os # optimize for size
    -Wall # enable warnings
    -Wno-main
    -Wundef
    -pedantic
    -g
)
file(GLOB SRC_FILES "src/*.c") # Load all files in src folder

# Include header files directories
include_directories(${INC_DIR})

# Create one target
add_executable(${PRODUCT_NAME} ${SRC_FILES})
