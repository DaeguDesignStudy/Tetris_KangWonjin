#pragma once

#include <GameFramework/Display.h>

/**
 * 콘솔 출력의 구현부입니다.
 * 상속받은 Map 객체를 이용하여 게임에 필요한 모든 디스플레이 출력을 합니다.
 * 게임상태에 따라 GAME_OVER, GAME_PAUSED, GAME_RUNNING(Map의 상태) 등을 출력해야합니다.
 * */
class ConsoleDisplay : public Display
{
public:
    void Draw(GameState state) override
    {
    }
};