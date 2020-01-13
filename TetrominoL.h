#pragma once
#include "tetromino.h"

class TetrominoL : public Tetromino
{
    int x;
    int y;
    Block *block;

public:
    void Rotate() override;
};