#pragma once

enum class BlockType
{
    I,
    O,
    T,
    J,
    L,
    S,
    Z,
};

struct Block
{
    int x,y;
    BlockType type;
};
