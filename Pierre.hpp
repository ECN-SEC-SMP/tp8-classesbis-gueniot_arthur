/**
* File : Pierre.hpp
* Date : 29/03/2022
* Définition des classes d'animal spécialisé Pierre
*/

#pragma once

#include <iostream>
#include "Animal.hpp"

class Pierre : public Animal {
  void setAttaque(Animal &a);
  void deplace(int maxX, int maxY);
};