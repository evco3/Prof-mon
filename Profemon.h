#pragma once

class Profemon {
public:
    //Default Constructor
    Profemon();
    //Main Constructor
    Profemon(string cPath, string cName, int cHealth, int cSpeed, int cMoveSet[]);
    //Copy Constructor
    Profemon(Profemon& rhs);
    Profemon& operator=(Profemon& rhs);

    //Accessors
    string getPath();
    string getName();
    int getHealth();
    int getSpeed();

    string getStatus();
    int getStatusTurn();


    int* getMoveSet();
private:
    string path;
    string name;
    int health;
    int speed;

    string status;
    int statusTurn;

    int moveSet[4];


};
class ProfemonException(){
    
}