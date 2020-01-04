#pragma once

#include <iostream>

struct Block
{
    int x;
    int y;
};

class Tetromino
{
public:
    virtual void Rotation() = 0;
};

class TetrominoL : public Tetromino
{
    int x;
    int y;
    Block block[4];

public:
    void Rotation() override
    {
        std::cout << "Rotation L()\n";
    }
};

class TetrominoR : public Tetromino
{
    int x;
    int y;
    Block block[4];

public:
    void Rotation() override
    {
        std::cout << "Rotation R()\n";
    }
};