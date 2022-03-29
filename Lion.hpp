#pragma once

#include <iostream>
#include "Animal.hpp"

class Lion : public Animal{
  void setAttaque(Animal &a);
  void deplace(int maxX, int maxY);
};
