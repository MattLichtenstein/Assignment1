/* 
 * File:   Boomerang.h
 * Author: Matt <mpl14b@my.fsu.edu>
 */


#include <string>
#include "Weapon.h"

#ifndef BOOMERANG_H
#define BOOMERANG_H

/**
 * Defines the behavior of a common spear (hitpoint = 40, ignores 20% of 
 * armor points)
 */
class Boomerang : public Weapon {
public:

    Boomerang() : Weapon("Boomerang", (rand() % 2 + 1) * 30) {
    }
    virtual ~Boomerang() {}; 
    virtual double hit(double armor);

};

#endif /* COMMONSPEAR_H */

