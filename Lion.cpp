#include "Lion.hpp"

Lion::Lion(int maxX, int maxY, bool vivant) : Animal(maxX,maxY){
  this->nom="Lion";
  this->vivant = vivant;
  }
  
Lion::Lion(int maxX, int maxY, int a, int b, bool vivant) : Animal(maxX,maxY){
  this->nom="Lion";
  this->vivant = vivant;
  }
  
void Lion::setAttaque(){
  int aleatoire = rand() % 2 + 1;
  this->typeAttaque = Attaque(aleatoire);
}

void Lion::deplace(int maxX, int maxY){
  int aleatoire = rand() % 4;
  switch(aleatoire){
    case 0 :
      this->x+=1;
      if( this->x > maxX ) this->x = 0;
      this->y+=1;
      if( this->y > maxY ) this->y = 0;
      break;
    case 1 :
      this->x+=1;
      if( this->x > maxX ) this->x = 0;
      this->y-=1;
      if( this->y < 0 ) this->y = maxY;
      break;
    case 2 :
      this->x-=1;
      if( this->x < 0 ) this->x = maxX;
      this->y-=1;
      if( this->y < 0 ) this->y = maxY;
      break;
    default :
      this->x-=1;
      if( this->x < 0 ) this->x = maxX;
      this->y+=1;
      if( this->y > maxY ) this->y = 0;
      break;
  }
}

