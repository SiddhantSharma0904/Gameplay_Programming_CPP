#include<iostream>
using namespace std;

int health;
int checkpoint;
bool isCheckpointReached = false;
bool isplayerAlive = true;
int playerposition = 0;

int main()
{
    if(isCheckpointReached == true && isplayerAlive == true)
    {
        playerposition = checkpoint;
        cout << "You have reached a checkpoint! Your current position is: " << playerposition << endl;
    }
    else
    {
        cout << "You have not reached a checkpoint yet. Keep going!" << endl;
    }

    if(isplayerAlive == false && isCheckpointReached == true)
    {
        cout << "You have died! Returning to the last checkpoint..." << endl;
        playerposition = checkpoint;
        cout << "Your current position is: " << playerposition << endl;
    }

    if(isCheckpointReached == false && isplayerAlive == false)
    {
       playerposition = 0;
       cout << "You have died without reaching a checkpoint! Returning to the start..." << endl;
    }
}