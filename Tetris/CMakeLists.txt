
add_executable(Tetris src/main.cpp)
target_link_libraries(Tetris GameFramework)
target_include_directories(Tetris PRIVATE include)