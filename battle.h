// 
// Created by Luke Ivan on 2022-11-09.
//
#pragma once

#ifndef BACKGROUND_H_BATTLE_H
#define BACKGROUND_H_BATTLE_H

#include <iostream>
#include "Profemon.h"
#include <string>
#include <vector>
#include <cstdlib>
#include <time.h>

using namespace std;

class battleSequence {
private:
    bool gameState;
    int turn;
    int score;
    int difficulty;
    int playerParty[];
    int opponentParty[];
    //Move structure to be imported
    int effects[];
    vector<Profemon> battleParty[];
    vector<Profemon> oppParty[];
public:
    /*===============================CONSTRUCTORS=========================*/
    battleSequence();
    battleSequence(const int& player); 
    battleSequence(const int& player, const int& opponent);
    

    /*===============================OVERLOADING OPERATOR=========================*/
    battleSequence& operator=(const battleSequence);

    int getMultiplier(int moveID, std::string type, Profemon opponent); //APPROPRIATE PROFESSOR CLASSTYPE ADDED AS PARAMETER REQ
    void speedCalc(int speed, int opponentSpeed);
    int importPlayerProfs(const int& player);
    void healthCalc(int health, int opponentHealth);
    void useItem(int itemID, /*professor target*/);
    void effect(int effectID, /*professor target*/);
    void exit();
    bool getGS();
    int getTurn();
    int getScore();
};


class BattleException{
private:
    string errorMsg;
public:
    BattleException(const string& msg);
    string sendError();
};
#endif //BACKGROUND_H_BATTLE_H