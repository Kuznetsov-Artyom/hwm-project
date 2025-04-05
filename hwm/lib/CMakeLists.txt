set(TARGET_NAME hwm)

file(GLOB_RECURSE TARGET_SOURCES ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)

add_executable(${TARGET_NAME} ${TARGET_SOURCES})

target_include_directories(${TARGET_NAME} PUBLIC
    ${HWM_INCLUDE_DIR}
)

target_link_libraries(${TARGET_NAME} PUBLIC
    argparse
)
