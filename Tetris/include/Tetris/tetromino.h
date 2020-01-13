#pragma once

#include <GameFramework/Command.h>

#include "Block.h"

class Tetromino
{
    int x;
    int y;
    Block *block;

public:
    void DoCommand(Command command)
    {
        switch (command)
        {
        case Command::DOWN:
            /* code */
            break;

        default:
            break;
        }
    }

    virtual void Rotate() = 0;
    void Move(int dir_x, int dir_y);
    void MoveFloor();
};
