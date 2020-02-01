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
    /**
     *  게임 상태에 따라 
     * */
    void Draw(GameState state) override
    {
        if(state == GameState::GAME_RUNNING)
            DrawGame();
        else if(state == GameState::GAME_OVER)
            DrawGameStatusOver();
        else if (state == GameState::GAME_PAUSED)
            DrawGameStatusPaused();
        else if (state == GameState::GAME_CLEAR)
            DrawGameStatusClear();
        else
            ;
    }

private:
    void DrawGameStatusOver()
    {
    }

    void DrawGameStatusPaused()
    {
    }

    void DrawGameStatusClear()
    {
    }

    /**
     *  Map 정보를 이용하여 진행되고 있는 게임을 그립니다.
     * */
    void DrawGame()
    {
    }
};