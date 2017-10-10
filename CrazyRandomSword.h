/* 
 * File:   CrazyRandomSword.h
 * Author: Matt <mpl14b@my.fsu.edu>
 */

#include <ctime>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of the crazy random sword (hitpoint = random number between 1 and 100, 
 * Ignores a random amount of armor between 0 and half of the armor
 */



class CrazyRandomSword : public Weapon {
public:


    CrazyRandomSword() : Weapon("Crazy Random Sword", rand() % 91 + 10) {
    }
    virtual ~CrazyRandomSword() {}; 
    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */