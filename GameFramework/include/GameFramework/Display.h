#pragma once

#include "GameState.h"
#include "Map.h"

/**
 * Display Interface입니다. 
 * 게임시스템에서 특정 주기마다 Draw함수를 호출합니다.
 * 입력받은 Map을 Draw함수에서 그리는 역할을 합니다.
 * */
class Display
{
protected:
    Map *m_map;

public:
    virtual ~Display();

    /**
     * Map 데이터를 설정합니다.
     * */
    void SetMap(Map *map)
    {
        m_map = map;
    }

    /**
     * 설정된 Map 및 게임 상태에 따라서 출력 디바이스에 게임을 그려냅니다.
     * */
    virtual void Draw(GameState state) = 0;
};
