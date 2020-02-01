#pragma once
#include "tetromino.h"

/**
 * L 테트로미노를 구현합니다.
 * */
class TetrominoL : public Tetromino
{
public:
    /**
     *  설정된 회전축을 중심으로 블럭을 회전합니다.
     * */
    void Rotate() override;
};