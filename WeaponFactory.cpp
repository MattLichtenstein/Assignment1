/* 
 * File:   WeaponFactory.cpp
 * Author: Javier <jrescobara@gmail.com>
 *  
 */ 

#include <cstdlib>
#include <ctime>


#include <string>
#include <stddef.h> 
#include "WeaponFactory.h"
#include "CommonSword.h" 
#include "CommonSpear.h"
#include "SimpleAxe.h"
#include "CrazyRandomSword.h"
#include "Boomerang.h"


WeaponFactory* WeaponFactory::instance = NULL;

WeaponFactory * WeaponFactory::getInstance() {
    if (!instance) {
        instance = new WeaponFactory();
    }
    return instance;
}

Weapon * WeaponFactory::getWeapon(std::string name) {
    srand(time(0));
    if (name.compare("sword") == 0) {
        return new CommonSword();
    }
    if (name.compare("spear") == 0) {
        return new CommonSpear();
    }
    if(name.compare("axe") == 0){
        return new SimpleAxe();
    }
    if(name.compare("crs") == 0){
        return new CrazyRandomSword();
    }
    if(name.compare("boomerang") == 0){
        return new Boomerang();
    }

    throw "Invalid weapon";
}