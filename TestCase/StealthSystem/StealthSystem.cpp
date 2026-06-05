#include<iostream>
using namespace std;

int playerdistance;
int detectionRange = 10;
bool iswalking = false;
bool iscrouching = false;
bool isplayerdetected = false;
bool isenemychasing = false;

int main()
{
    if(playerdistance <= detectionRange && !isplayerdetected)
    {
        isplayerdetected = true;
        cout << "Player detected!" << endl;
        isenemychasing = true;
    }
    else if(playerdistance > detectionRange && isplayerdetected)
    {
        isplayerdetected = false;
        cout << "Player lost!" << endl;
        isenemychasing = false;
    }

    if(iscrouching == true)
    {
        detectionRange = 5;
    }
    else
    {
        detectionRange = 10;
    }
}