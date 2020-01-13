#pragma once
#include <queue>
#include <atomic>
#include <thread>

#include "Command.h"

class InputDevice
{
    std::thread m_inputThread;

protected:
    std::atomic<bool> m_running = false;
    std::queue<Command> m_inputQueue; // thread-safe queue로 변경해야 함

public:
    Command GetInput()
    {
        auto command = m_inputQueue.front();
        m_inputQueue.pop();
        return command;
    }

    void StartListenInput()
    {
        m_running.store(true);
        m_inputThread = std::thread(&InputDevice::runningloop, this);
    }

    void Stop()
    {
        m_running.store(false);
        m_inputThread.join();
    }

private:
    // 자식 클래스에서 m_inputQueue에 데이터를 입력하는 부분을 작성해야함
    virtual void runningloop() = 0;
};