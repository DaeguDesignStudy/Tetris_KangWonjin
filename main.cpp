#include <random>
#include "tetromino.h"

int GetRandomNumber(int min, int max)
{
    std::random_device rd;
    std::mt19937_64 random(rd());
    std::uniform_int_distribution<int> range(min, max);
    return range(rd);
}

Tetromino *GenerateRandomTetromino()
{
    Tetromino *tetromino = nullptr;
    int i = GetRandomNumber(0, 1);
    switch (i)
    {
    case 0:
        tetromino = new TetrominoL;
        break;
    case 1:
        tetromino = new TetrominoR;
    default:
        break;
    }
    return tetromino;
}

int main(int argc, char const *argv[])
{
    Tetromino *tetromino = GenerateRandomTetromino();
    tetromino->Rotation();
    return 0;
}
