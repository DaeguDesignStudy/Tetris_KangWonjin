#pragma once

#include "Command.h"
#include "IMap.h"

class IDisplay
{
    IMap *m_map;

public:
    void SetMap(IMap *map)
    {
        m_map = map;
    }

    virtual void Display(Command command) = 0;
};
