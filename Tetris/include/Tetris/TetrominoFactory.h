#pragma once

#include "TetrominoL.h"
#include <queue>

/**
 * 테트로미노를 랜덤으로 생성합니다.
 * */
class TetrominoFactory
{
    std::queue<Tetromino*> m_tetrominos;
public:
    /**
     * queue에서 테트로미노를 빼고 출력합니다.
     * queue가 비어있다면 generateTetrominoSet() 을 호출하여 queue를 채웁니다.
     * */
    static Tetromino* GetNextTetromino();

private:
    /**
     * 모든 테트로미노를 하나씩 가지는 테트로미노 세트를 만들고 m_tetrominos에 저장합니다.
     * */
    void generateTetrominoSet();
};