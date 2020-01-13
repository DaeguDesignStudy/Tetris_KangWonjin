
add_executable(Tetris src/main.cpp)
target_link_libraries(Tetris GameFramework)
target_include_directories(Tetris PRIVATE include)

add_executable(test_keyboard tests/test_keyboardInput.cpp)
target_link_libraries(test_keyboard ${CONAN_LIBS} GameFramework)
target_include_directories(test_keyboard PRIVATE include)