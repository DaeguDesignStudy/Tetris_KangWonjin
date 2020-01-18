#pragma once
#include <vector>

/**
 * Map Interface입니다.
 * Map과 관련된 클래스는 Map Interface를 상속하여 구현하시기 바랍니다.
 * Game, Display 객체에서 같은 map객체를 사용하게 되니 읽기 및 쓰기에 대하여
 * thread에 안전하게끔 작성해야 합니다.
 * */
class Map
{
public:
    virtual ~Map();
};