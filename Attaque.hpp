/**
* File : Attaque.hpp
* Date : 29/03/2022
* Définition des classes de gestion d'attaque pour les personnages
*/

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


class Attaque{
  private:
    int type; // 0 :pierre, 1: Feuille, 2:Ciseaux

  public:
    Attaque(); //crée une attaque random
    Attaque(int a); //crée une attaque spécifique
    int getAttaque() const;
    bool resoudreAttaque(Attaque &a)const;
    string getNomAttaque() const;
};