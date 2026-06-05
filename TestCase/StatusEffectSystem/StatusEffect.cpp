#include<iostream>
using namespace std;

int health = 100;
bool isPoisoned = false;
bool isBurned = false;
bool isFrozen = false;
bool canMove = true;
bool isAlive = true;

int main() 
{
    if(isPoisoned == true) 
    {
        health--;
        cout << "You are poisoned! Health: " << health << endl;
    }
    else
    {
        cout << "You are not poisoned. Health: " << health << endl;
    }

    if(isBurned == true) 
    {
        health -= 5;
        cout << "You are burned! Health: " << health << endl;
    }
    else
    {
        cout << "You are not burned. Health: " << health << endl;
    }

    if(isFrozen == true) 
    {
        canMove = false;
        cout << "You are frozen! You cannot move." << endl;
    }
    else
    {
        cout << "You are not frozen. You can move." << endl;
    }

    if(health <= 0) 
    {
        isAlive = false;
        cout << "You have died!" << endl;

    }
    else
    {
        cout << "You are still alive! Health: " << health << endl;
        isAlive = true;
    }
    return 0;
}