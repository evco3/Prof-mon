//Implementation File Created for battle.h

using namespace std;

#include "battle.h"

BattleException::BattleException(const string& message) { this->message = message; }
string& BattleException::what() { return message; }


//Accepts integer array containing profemon ids, makes local instance of each profemon in the 
//battle sequence so that values can be modified
battleSequence::importPlayerProfs(const int& player, const Profemon& profList[]){
    int valid = 0;
    for(int i = 0; i < player.size(); i++){
        this->battleParty.pushBack = profList[player[i]];
    }
    if(valid != 0){
        throw BattleException("Invalid Professor Selected");
        return valid;
    }
    else return valid;
}

// Default
battleSequence::battleSequence() {
    throw BattleException("Character Party Not Valid"); //For now!
}

//Generating a random Battle should an opponent not be provided
battleSequence::battleSequence(const int& player, const Profemon& profList[]){
    srand(time(0));
    importPlayerProfs(player);

    for(int i = 0; i < player.size(); i++){
        
    }

    
}

// Generating a battle where opponent IS provided
battleSequence::battleSequence(const int& player, const int& opponent, const Profemon& profList[]) {

    importPlayerProfs(player);
    for(int i = 0; i < player.size(); i++){
        this->oppParty.pushBack = profList[opponent[i]];
    }
}

int getMultiplier(){

}