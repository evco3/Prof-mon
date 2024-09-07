//
// Created by Hayden Murphy on 2022-11-23.
//

#include "Move.h"
#include <string>
using namespace std;

//Default Constructor
Move::Move() {
    name = "";
    damage = NULL;
    heal = NULL;
    status = "";
}
//Main Constructor
Move::Move(string cName, int cDamage, int cHeal, string cStatus) {
    //TODO Check if name is than 1 character
    //TODO Check if status is a valid word

    name = cName;
    damage = cDamage;
    heal = cHeal;
    status = cStatus;
}
//Copy Constructor
Move::Move(Move &rhs) {
    name = rhs.getName();
    damage = rhs.getDamage();
    heal = rhs.getHeal();
    status = rhs.getStatus();
}
// '=' Operator
Move &Move::operator=(Move &rhs) {
    name = rhs.getName();
    damage = rhs.getDamage();
    heal = rhs.getHeal();
    status = rhs.getStatus();

    return *this;
}
//Accessors
string Move::getName() {
    return name;
}

int Move::getDamage() {
    return damage;
}

int Move::getHeal() {
    return heal;
}

string Move::getStatus() {
    return status;
}

