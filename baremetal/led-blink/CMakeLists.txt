cmake_minimum_required(VERSION 3.12)

# Pull in SDK (must be before project)
include(pico_sdk_import.cmake)

set(PICO_TOOLCHAIN_PATH "C:/Program Files (x86)/GNU Arm Embedded Toolchain/10 2021.10")

project(do_nothing C)
set(CMAKE_C_STANDARD 11)

# Initialize the SDK
pico_sdk_init()

# Add your executable target
add_executable(do_nothing
    main.c
    )

# Link against the Pico SDK libraries
target_link_libraries(do_nothing
    pico_stdlib
    )

pico_add_extra_outputs(do_nothing)

