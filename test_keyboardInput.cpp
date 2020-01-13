#include <gtest/gtest.h>

#include <thread>

#include "KeyboardInput.h"

TEST(KEYBOARD_INPUT, getInput)
{
    KeyboardInput keyboard;
    keyboard.StartListenInput();
    std::this_thread::sleep_for(std::chrono::seconds(2));
    keyboard.Stop();
}