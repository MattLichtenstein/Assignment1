/* 
 * File:   Boomerang.cpp
 * Author: Matt <mpl14b@my.fsu.edu>
 */

#include "Boomerang.h"

//Boomerang does 30 hitpoints and then has a 50% chance of swinging back around and doing another 30 hitpoints while ignoring armor
double Boomerang::hit(double armor) {
    
    double damage = hitPoints;

    if(hitPoints == 30){	//if the boomerang does not come back around, just 30 hitpoints minus armor
    	damage = damage - armor;
    }
    else if(hitPoints == 60){   //if the boomerang does come back around, ignore armor on the second hit, but not for the first hit
    	damage = damage - armor;
    }
    
    if (damage < 0) {
        return 0;
    }
    return damage;
}
