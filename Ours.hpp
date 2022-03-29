#pragma once

#include <iostream>
#include "Animal.hpp"

class Ours : public Animal{
  void setAttaque(Animal &a);
  void deplace(int maxX, int maxY);
};
