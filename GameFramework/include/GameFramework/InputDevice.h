#pragma once
#include <queue>
#include <atomic>
#include <thread>

#include "Command.h"

/**
 * Input Device를 추상화한 인터페이스입니다.
 * 입력 디바이스에서 받은 입력을 queue에 순차적으로 넣습니다.
 * 입력 받은 데이터는 외부 클래스에서 GetInput 메소드를 통해 접근할 수 있습니다.
 * Input Device를 상속한 구현체는 각 InputeDevice에 대한 내용을 running_loop()에 구현해야 합니다.
 * */
class InputDevice
{
    std::thread m_inputThread;

protected:
    std::atomic<bool> m_running = false;
    std::queue<Command> m_inputQueue; // thread-safe queue로 변경해야 함

public:
    Command GetInput()
    {
        if (m_inputQueue.empty())
            return Command::EMPTY;

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