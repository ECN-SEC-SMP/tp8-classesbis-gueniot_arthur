#pragma once

#include <iostream>
#include "Animal.hpp"

class Lion : public Animal{
  Lion(int maxX, int maxY, bool vivant);
  Lion(int maxX, int maxY, int a, int b, bool vivant);
  void setAttaque();
  void deplace(int maxX, int maxY);
};
