#include "GameStateManager.h"
#include "TetrisGame.h"
#include "TetrisMap.h"
#include "ConsoleDisplay.h"

int main(int argc, char const *argv[])
{
    TetrisMap *map;
    TetrisGame *game;
    game->SetMap(map);

    ConsoleDisplay *display;
    display->SetMap(map);

    GameStateManager *manager;
    manager->SetGame(game);
    return 0;
}
