#pragma once

#include "../Map/Map.h"
#include "../Hero/Hero.h"

class GameContext
{
public:
  unsigned long currentSeed = 0;
  uint8_t stage = 5;
  uint8_t savedStage = 0;
  Map mapObject;
  Hero hero;
};
