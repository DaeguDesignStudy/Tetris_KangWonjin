#pragma once

#include <GameFramework/Game.h>

/**
 * 게임 로직을 관할하는 클래스입니다.
 * DoCommand() 가 주기적으로 GameFramework에 의해 호출됩니다.
 * DoCommand()에서는 입력받은 command를 토대로 게임로직을 수행하고,
 * 상속받은 map 객체의 상태를 수정해야 합니다.
 * */
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