/* 
 * File:   CrazyRandomSword.cpp
 * Author: Matt <mpl14b@my.fsu.edu>
 */

#include <time.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <ctime>
#include "CrazyRandomSword.h"

using namespace std;

double CrazyRandomSword::hit(double armor){

	int halfArmor = armor/2; 		//half the armor - this is the most armor that can be ignored
	int randomNumb = rand() % (halfArmor + 1); //random number between 0 and half the armor
	armor -= randomNumb;	//subtract the ignored armor from base armor

	double damage = hitPoints - armor; 	
	if(damage < 0){
		return 0;
	}

	return damage;

}