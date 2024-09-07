#include <string>
using namespace std;
#include "Move.h"
#include "Profemon.h"

#include <iostream>
#include <vector>


class GameInitialize{
    public:
        //Default Constructor
        GameInitialize();
        // Main Constructor
        GameInitialize(string filePath);
        //Load from Dir
        loadFromDir(string filePath);
    private:
        string mainFilePath;

        vector<Move> moveList;
        vector<Profemon> profList;
        
};

class GameInitializeException{
private:
    string errorMsg;
public:
    GameInitializeException(const string& msg);
    string sendError();
};