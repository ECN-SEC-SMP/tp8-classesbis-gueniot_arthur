/**
* File : Attaque.cpp
* Date : 29/03/2022
* Déclaration des méthodes de classes de gestion d'attaque pour les personnages
*/
#include <iostream>
#include "Attaque.hpp"

/* Constructeur permettant de créer une attaque random */
Attaque::Attaque(){
  this->type = rand()% 3;
}

/* Constructeur permettant de créer une attaque spécifique */
Attaque::Attaque(int a){
  this->type = a;
}

/* Résoudre l'attaque entre l'objet animal et a en paramètre 
* retourne true si combat gagné par l'obje
*/
bool Attaque::resoudreAttaque(Attaque &a) const{
  bool res = 0;
  int egalite=0;
  if( (this->type == 0 && a.type == 1) || //pierre vs feuille
      (this->type == 1 && a.type == 2) || //feuille vs ciseaux
      (this->type == 2 && a.type == 0))   //ciseau vs pierre
    res=false;
  else if(this->type == a.type){ // En cas d'égalité
    egalite= rand() % 2; // retourne de façon aléatoire                               la valeur 0 ou 1
    if (egalite == 0) 
      res = false; 
    else 
      res = true;
  }
  else //si aucune des conditions 
    res = true;
  
  return res;
}

int Attaque::getAttaque()const{
  return this->type;
}

string Attaque::getNomAttaque()const{
  string nom_att = "erreur";
  switch (this->type){
    case 0:
      nom_att = "Pierre";
      break;
    case 1:
      nom_att = "Feuille";
      break;
    case 2:
      nom_att = "Ciseaux";
      break;
    default:
      break;
  }
  return nom_att;
}
