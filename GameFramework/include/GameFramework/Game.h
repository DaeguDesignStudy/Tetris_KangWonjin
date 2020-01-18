#pragma once

#include "GameState.h"
#include "Command.h"
#include "Map.h"

/**
 * Game Interface입니다.
 * 실제 게임은 해당 클래스를 상속받아 구출하기 바랍니다.
 * DoCommand() 함수가 GameFramework에 의해 주기적으로 호출됩니다.
 * 구현된 자식 Game 객체는 입력받은 command에 따라 게임 로직을 수행하고,
 * m_map 객체의 상태를 변경해야합니다.
 * 해당하는 로직은 DoCommand() 에 작성하시기 바랍니다.
 * */
class Game
{
    Map *m_map;

public:
    virtual ~Game();

    void SetMap(Map *map)
    {
        m_map = map;
    }

    virtual GameState DoCommand(Command command) = 0;
};
