/* 
 * File:   Boomerang.h
 * Author: Matt <mpl14b@my.fsu.edu>
 */


#include <string>
#include "Weapon.h"

#ifndef BOOMERANG_H
#define BOOMERANG_H

/**
 * Defines the behavior of a Boomerang (hitpoint = 30, 50% chance to hit a second time and ignore armor on the second hit)
 */
class Boomerang : public Weapon {
public:

    Boomerang() : Weapon("Boomerang", (rand() % 2 + 1) * 30) { //Random number between 1 and 2. 2 means boomerang came back around and hit again ignoring armor)
    }
    virtual ~Boomerang() {}; 
    virtual double hit(double armor);

};

#endif /* COMMONSPEAR_H */

