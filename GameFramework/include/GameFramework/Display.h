#pragma once

#include "Command.h"
#include "Map.h"

class Display
{
protected:
    Map *m_map;

public:
    void SetMap(Map *map)
    {
        m_map = map;
    }

    virtual void Draw(Command command) = 0;
};
