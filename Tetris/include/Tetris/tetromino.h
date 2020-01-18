#pragma once

#include <GameFramework/Command.h>

#include "Block.h"

/**
 * 테트로미노 인터페이스입니다.
 * DoCommand() 함수 호출에 따라 내부 상태를 변경합니다.(회전, 이동)
 * 현재는 다른 구현을 가진 Rotate()만 가상함수로 두었습니다.
 * */
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
