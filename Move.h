// Profemon 
// 
// Created by Luke Ivan on 2022-11-09.
//
#pragma once

#include <string>
using namespace std;

class Move {
public:
    //Default Constructor
    Move();
    //Main Constructor
    Move(string cName, int cDamage, int cHeal, string cStatus);

    //Copy Constructor
    Move(Move& rhs);
    Move& operator=(Move& rhs);

    //Accessors
    string getName();
    int getDamage();
    int getHeal();
    string getStatus();

private:
    string name;
    int damage;
    int heal;
    string status;

};

class MoveException(){
    
}