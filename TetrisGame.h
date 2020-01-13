#pragma once

#include "IGame.h"

class TetrisGame : public IGame
{
    GameState DoCommand(Command command) override
    {
        // 입력에 따라 게임을 진행함
        switch (command)
        {
        case Command::LEFT:
            break;
        default:
        }

        return GameState::GAME_OVER;
    }
};