cmake_minimum_required(VERSION 2.8.12)
project(tetromino)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_subdirectory(GameFramework)
add_subdirectory(Tetris)

# add_executable(${PROJECT_NAME} main.cpp)

# set(TEST_KEYBOARD_INPUT test_keyboardInput)
# add_executable(${TEST_KEYBOARD_INPUT} test_keyboardInput.cpp)
# target_link_libraries(${TEST_KEYBOARD_INPUT} ${CONAN_LIBS})
