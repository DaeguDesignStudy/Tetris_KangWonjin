#include <GameFramework/GameFramework.h>
#include "Tetris/TetrisGame.h"
#include "Tetris/TetrisMap.h"
#include "Tetris/ConsoleDisplay.h"

int main(int argc, char const *argv[])
{
    TetrisMap *map;
    TetrisGame *game;
    game->SetMap(map);

    ConsoleDisplay *display;
    display->SetMap(map);

    GameFramework *manager;
    manager->SetGame(game);
    return 0;
}
