#pragma once
#include <vector>
#include "Block.h"

class IMap
{
protected:
    std::vector<std::vector<Block>> m_map;
};