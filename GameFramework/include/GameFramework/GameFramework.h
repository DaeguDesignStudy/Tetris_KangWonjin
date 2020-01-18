#pragma once

#include <iostream>

#include "Game.h"
#include "InputDevice.h"
#include "Display.h"
#include "GameState.h"
#include "Command.h"

/**
 * 게임상태를 관리하는 클래스입니다.
 * Game의 종류, Display Device, Inpute Device를 설정해야 하며, 
 * 설정한 객체를 유기적으로 연결하여 여러 입력에 따라 출력이 나타나게끔 제어하는 역할을 합니다. 
 * */
class GameFramework
{
    GameState m_state;
    Game *m_game;
    Display *m_display;
    InputDevice *m_input;

public:
    void Initialize(Game *game, Display *display, InputDevice *input, Map *map)
    {
        m_game = game;
        m_display = display;
        m_input = input;

        m_game->SetMap(map);
        m_display->SetMap(map);
    }

    void SetGame(Game *game) { m_game = game; }
    void SetDisplay(Display *display) { m_display = display; }
    void SetInput(InputDevice *input) { m_input = input; }

    void Process()
    {
        std::cout << __FUNCTION__ << std::endl;
        m_input->StartListenInput();
        while (true)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            Command command = m_input->GetInput();
            // 1. state 와 input에 따라 게임의 상태를 결정
            // GameState state = m_game->DoCommand(command);

            // 2. 필요한 command만 catch하고 나머지는 game으로 넘겨준다.
            if (command == Command::EXIT)
                break;

            switch (command)
            {
            case Command::PAUSE:
                /* code */
                break;
            // 기타 등의 Command의 처리를 합니다.
            default:
                // GameRunning State일 경우에는 Game 로직을 수행하기위해 m_game으로 command를 넘겨줍니다.
                m_game->DoCommand(command);
                break;
            }

            // 3. 게임의 상태를 고려하여 Display로 출력
            m_display->Draw(m_state);
        }
    }
};