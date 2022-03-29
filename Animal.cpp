#include "Animal.hpp"

Animal::Animal(int maxX, int maxY){
  this->x = rand() % maxX;
  this->y = rand() % maxY;
}

Animal::Animal(int maxX, int maxY, int a, int b){
  this->x = a;
  this->y = b;
}

int Animal::getX() const{
  return this->x;
}

int Animal::getY() const{
  return this->y;
}

string Animal::getNom() const{
  return this->nom;
}

bool Animal::getVivant() const{
  return this->vivant;
}

Attaque Animal::getAttaque() const{
  return this->typeAttaque;
}

void Animal::setVivant(bool v){
  this->vivant = v;
}

bool Animal::attaque(Animal &a){
  return this->typeAttaque.resoudreAttaque(a.typeAttaque);
}

