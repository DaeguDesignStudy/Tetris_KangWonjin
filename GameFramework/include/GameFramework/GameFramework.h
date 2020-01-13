#pragma once

#include "Game.h"
#include "InputDevice.h"
#include "Display.h"
#include "GameState.h"
#include "Command.h"

// 에뮬레이터
class GameFramework
{
    GameState m_state;
    Game *m_game;
    Display *m_display;
    InputDevice *m_input;

public:
    void SetGame(Game *game) {}
    void SetDisplay(Display *display) {}
    void SetInput(InputDevice *input) {}

    void Process()
    {
        while (true)
        {
            Command command = m_input->GetInput();
            // 1. state 와 input에 따라 게임의 상태를 결정
            GameState state = m_game->DoCommand(command);

            // 필요한 command만 catch하고 나머지는 game으로 넘겨준다.
            if (command == Command::EXIT)
                break;

            switch (command)
            {
            case Command::PAUSE:
                /* code */
                break;

            default:
                m_game->DoCommand(command);
                break;
            }

            // 2. 게임의 상태를 고려하여 Display로 출력
            m_display->Draw(command);
        }
    }
};