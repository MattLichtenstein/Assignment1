/* 
 * File:   SimpleAxe.cpp
 * Author: Matt <mpl14b@my.fsu.edu>
 */

#include "SimpleAxe.h"

double SimpleAxe::hit(double armor){
	double damage;
	if(armor > 0 && armor < 20){
	    damage = hitPoints;
	} 
	else{
		damage = hitPoints - armor;
	}
	if(damage < 0){
		return 0;
	}
	return damage;

}