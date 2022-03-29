#include "Pierre.hpp"
#include "TypeDef.hpp"

/* Constructeur avec valeurs de position de départ aléatoire */
Pierre::Pierre(int maxX, int maxY, string nom, bool vivant) : Animal(maxX, maxY){
  this->nom = nom;
  this->vivant = false;
}

/* Constructeur avec valeurs de position de départ définie par a et b */
Pierre::Pierre(int maxX, int maxY, int a, int b, string nom, bool vivant) : Animal(maxX, maxY, a, b){
  this->nom = nom;
  this->vivant = false;
}

void Pierre::setAttaque(){
  this->typeAttaque = Attaque(0);
}

void Pierre::deplace(int maxX, int maxY){
  /* Pierre ne bouge pas */
}
