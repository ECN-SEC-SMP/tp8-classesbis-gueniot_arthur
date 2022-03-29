#include "Animal.hpp"

Animal::Animal(int maxX, int maxY){
  this->x = rand() % maxX;
  this->y = rand() % maxY;
}