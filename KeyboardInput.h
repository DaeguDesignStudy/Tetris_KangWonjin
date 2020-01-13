#pragma once

#include <iostream>

#include <WinUser.h>

#include "IInput.h"
#include "Command.h"

class KeyboardInput : public IInput
{
    void runningloop() override
    {
        while (m_running.load())
        {
            SHORT b = GetAsyncKeyState(VK_LEFT);

            std::cout << "LEFT = " << b << "\n";
        }
    }
};