#pragma once

#include <GameFramework/Game.h>

class TetrisGame : public Game
{
    GameState DoCommand(Command command) override
    {
        // 입력에 따라 게임을 진행함
        switch (command)
        {
        case Command::LEFT:
            break;
        default:
            break;
        }

        return GameState::GAME_OVER;
    }
};