#pragma once

#include "GameState.h"
#include "Command.h"
#include "Map.h"

class Game
{
    Map *m_map;

public:
    void SetMap(Map *map)
    {
        m_map = map;
    }

    virtual GameState DoCommand(Command command) = 0;
};
