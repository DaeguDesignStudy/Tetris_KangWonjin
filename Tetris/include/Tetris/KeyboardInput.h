#pragma once

#include <iostream>
#include <chrono>

#include <windows.h>

#include <GameFramework/InputDevice.h>

class KeyboardInput : public InputDevice
{
    void runningloop() override
    {
        while (m_running.load())
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(500));

            SHORT b = GetAsyncKeyState(VK_LEFT);
            std::cout << "LEFT = " << b << "\n";
        }
    }
};