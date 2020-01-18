#pragma once
#include "tetromino.h"

/**
 * L 테트로미노를 구현합니다.
 * */
class TetrominoL : public Tetromino
{
    int x;
    int y;
    Block *block;

public:
    void Rotate() override;
};