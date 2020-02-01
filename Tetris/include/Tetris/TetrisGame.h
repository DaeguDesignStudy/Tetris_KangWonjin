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
        // 이동, 회전, 고정, 클리어 등

        // 2. Map을 탐색하여 클리어가 가능한 삭제합니다.

        // 3. 블럭의 이동, 회전을 수행합니다.
        // 3-1. 시간에 따른 블럭 이동 (y축으로 +1)
        // 3-2. 명령에 따른 블럭 이동
        switch (command)
        {
        case Command::LEFT:
            break;
        default:
            break;
        }

        // 4. 이동 및 회전한 블럭이 고정되어야 한다면 고정합니다.

        return GameState::GAME_OVER;
    }
};