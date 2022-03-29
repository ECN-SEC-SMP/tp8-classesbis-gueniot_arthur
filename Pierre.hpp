/**
* File : Pierre.hpp
* Date : 29/03/2022
* Définition des classes d'animal spécialisé Pierre
*/

#pragma once

#include <iostream>
#include "Animal.hpp"

class Pierre : public Animal {
  Pierre(int maxX, int maxY, string nom, bool vivant);
  Pierre(int maxX, int maxY, int a, int b, string nom, bool vivant);
  void setAttaque();
  void deplace(int maxX, int maxY);
};