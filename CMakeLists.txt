cmake_minimum_required(VERSION 3.20)
project(harvest_moon_fomt_decomp C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/include/gba
    ${CMAKE_CURRENT_SOURCE_DIR}/include/farm
    ${CMAKE_CURRENT_SOURCE_DIR}/include/player
    ${CMAKE_CURRENT_SOURCE_DIR}/include/entities
    ${CMAKE_CURRENT_SOURCE_DIR}/include/events
    ${CMAKE_CURRENT_SOURCE_DIR}/include/audio
    ${CMAKE_CURRENT_SOURCE_DIR}/include/system
    ${CMAKE_CURRENT_SOURCE_DIR}/include/text
)

file(GLOB_RECURSE SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.c
)

add_library(fomt_core STATIC ${SOURCES})

# Target for testing / analysis
add_executable(fomt_simulator
    src/main.c
    src/core/dispatcher.c
    src/core/scene_manager.c
    src/core/hardware.c
    src/core/vtables.c
    src/farm/farm.c
    src/farm/shipping_bin.c
    src/farm/buildings.c
    src/player/farmer.c
    src/player/item.c
    src/entities/entity_manager.c
    src/entities/animals.c
    src/entities/npc.c
    src/events/script_engine.c
    src/audio/m4a.c
    src/system/sram.c
    src/system/input.c
    src/system/time.c
    src/text/dialogue.c
)
