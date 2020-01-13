#pragma once

#include "GameState.h"
#include "Command.h"
#include "IMap.h"

class IGame
{
    IMap *m_map;

public:
    void SetMap(IMap *map)
    {
        m_map = map;
    }

    virtual GameState DoCommand(Command command) = 0;
};
