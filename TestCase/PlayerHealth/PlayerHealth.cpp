/*1. Player Health System

A player has:

100 HP

Enemy attacks deal:

25 damage

Logic:

reduce health
print remaining HP
if HP reaches 0 → print "Player Dead"*/

#include<iostream>
using namespace std;

int health = 100;
int damage = 25;

int main()

{

if(damage > 0)
{
   health-= damage;
   cout << "Player takes damage! Health is now: " << health << endl;
}
else
{
   cout << "Player is safe! Health remains: " << health << endl;
}

if(health <= 0)
{
   cout << "Player is dead!" << endl;
}
else
{
   cout << "Player is alive";

}

return 0;

}