#pragma once

#include <iostream>
#include <chrono>

#include <windows.h>

#include <GameFramework/InputDevice.h>

/**
 * 키보드 입력에 대한 구현부입니다.
 * running_loop()가 GameFramework에 의해 다른 Thread로 호출되며, 
 * 해당 함수에서는 키보드 입력을 감지하여 게임에 필요한 입력을 상속받은 queue에 넣어주어야합니다.
 * */
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