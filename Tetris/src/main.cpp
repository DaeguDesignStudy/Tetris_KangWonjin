#include <GameFramework/GameFramework.h>
#include "Tetris/TetrisGame.h"
#include "Tetris/TetrisMap.h"
#include "Tetris/ConsoleDisplay.h"
#include "Tetris/KeyboardInput.h"

int main(int argc, char const *argv[])
{
    TetrisMap *map;
    TetrisGame *game;
    ConsoleDisplay *display;
    KeyboardInput *input;

    GameFramework *manager;
    manager->Initialize(game, display, input, map);
    manager->Process();

    return 0;
}
