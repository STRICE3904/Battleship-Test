#include "Boat.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
//Default contstructor

using namespace std;

Boat::Boat(char d, int lgth, vector<int> r, vector<int> c, int hit, string nme)
{
    dir = d;
    length = lgth;
    boatrow = r;
    boatcol = c;
    hits = hit;
    name = nme;
}

Boat::~Boat()
{
}

//set boat hit
void Boat::setHit()
{
    hits++;
}

int Boat::checkSunk(int BoatSize)
{
    if (hits >= BoatSize)
    {
        return 9;
    }
    else
    {
        return 0;
    }
}

//get boat playerGuess coordinates
void Boat::boatCoordinates()
{
    cout << "Coordinates for boat " << name << endl << endl;
    for (int i = 0; i < length; i++)
    {
        cout << "playerGuess [" << boatrow[i] << "][" << boatcol[i] << "]" << endl;
    }
    cout << endl;
}

//check coordinate bombed to find particular boat
string Boat::getBoat(int r, int c)
{
    for (int i = 0; i < length; i++)
    {
        if ((boatrow[i] == r) && (boatcol[i] == c))
        {
            return name;
        }
    }
    return "";
}