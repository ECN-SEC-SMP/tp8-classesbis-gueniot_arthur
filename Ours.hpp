#pragma once

#include <iostream>
#include "Animal.hpp"

class Ours : public Animal{
  void setAttaque();
  void deplace(int maxX, int maxY);
};
