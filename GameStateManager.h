#pragma once

#include "IGame.h"
#include "IInput.h"
#include "IDisplay.h"
#include "GameState.h"
#include "Command.h"

class GameStateManager
{
    GameState m_state;
    IGame *m_game;
    IDisplay *m_display;
    IInput *m_input;

public:
    void SetGame(IGame *game) {}
    void SetDisplay(IDisplay *display) {}
    void SetInput(IInput *input) {}

    void Process()
    {
        while (true)
        {
            Command command = m_input->GetInput();
            // 1. state 와 input에 따라 게임의 상태를 결정
            GameState state = m_game->DoCommand(command);

            // 2. 게임의 상태를 고려하여 Display로 출력
            m_display->Display(command);
        }
    }
};