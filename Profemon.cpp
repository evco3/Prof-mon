//
// Created by Hayden Murphy on 2022-11-23.
//

#include "Profemon.h"
#include <string>
using namespace std;
#include <boost/filesystem.hpp>

//Default Constructor
Profemon::Profemon() {
    path = "";
    name = "";
    health = 1;
    speed = 1;
    status = "";
    statusTurn = 0;
    moveSet[0] = 0;
    moveSet[1] = 0;
    moveSet[2] = 0;
    moveSet[3] = 0;

}
Profemon::Profemon(string cPath, string cName, int cHealth, int cSpeed, int *cMoveSet) {
    //Check if Valid directory
    if(boost::filesystem::exists(cPath)){
        path = cPath;
    }else{
        //Error
    }
    //Check if cName is greater than 0
    if(cName.size() > 0){
        name = cName;
    }else{
        //Error
    }
    //Check if cHealth is greater than 0
    if(cHealth > 0){
        health = cHealth;
    }else{
        //Error
    }
    //Check if cSpeed is greater than 0
    if(cSpeed > 0){
        speed = cSpeed;
    }else{
        //Error
    }
    status = "";
    statusTurn = 0;
    for(int i = 0; i < 4; i++){
        moveSet[i] = cMoveSet[i];
    }

}
//Copy Constructor

Profemon::Profemon(Profemon &rhs) {
    name = rhs.getName();
    health = rhs.getHealth();
    speed = rhs.getSpeed();
    //TODO FIX line below
    //moveSet = rhs.getMoveSet();
}

// '=' Operator
Profemon &Profemon::operator=(Profemon &rhs) {
    name = rhs.getName();
    damage = rhs.getDamage();
    heal = rhs.getHeal();
    status = rhs.getStatus();

    return *this;
}

//Accessors
string Profemon::getPath(){
    return path;
}

string Profemon::getName() {
    return name;
}
int Profemon::getHealth() {
    return health;
}
int Profemon::getSpeed() {
    return speed;
}
string Profemon::getStatus() {
    return status;
}
int Profemon::getStatusTurn() {
    return statusTurn;
}
int* Profemon::getMoveSet() {
    return moveSet;
}