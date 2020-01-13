#pragma once

#include <iostream>
#include <chrono>

#include <windows.h>

#include "IInput.h"
#include "Command.h"

class KeyboardInput : public IInput
{

    void runningloop() override
    {
        while (m_running.load())
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(100));

            SHORT b = GetAsyncKeyState(VK_LEFT);
            std::cout << "LEFT = " << b << "\n";
        }
    }
};