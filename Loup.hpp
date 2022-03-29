/**
* File : Loup.hpp
* Date : 29/03/2022
* Définition des classes d'animal spécialisé Loup
*/

#pragma once

#include <iostream>
#include "Animal.hpp"

class Loup : public Animal {
  void setAttaque();
  void deplace(int maxX, int maxY);
};