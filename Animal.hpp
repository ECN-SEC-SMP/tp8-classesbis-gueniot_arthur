#pragma once

#include <iostream>
#include "Attaque.hpp"
#include <string>
#include <cstdlib>
#include "time.h"
using namespace std;

class Animal {

  protected : 
    string nom;
    int x, y;
    bool vivant;
    Attaque typeAttaque;

  public : 
    Animal(int maxX, int maxY);
    Animal(int maxX, int maxY, int a, int b);
    string getNom() const;
    int getX() const;
    int getY() const;
    bool getVivant() const;
    Attaque getAttaque() const;
    void setVivant(bool v);
    bool attaque(Animal &a);
    virtual void setAttaque()=0;
    virtual void deplace(int maxX, int maxY)=0;

};