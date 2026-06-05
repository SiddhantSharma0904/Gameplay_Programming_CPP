/*A player has:

100 stamina

Rules:

Player can sprint only if stamina > 0
Sprinting decreases stamina by 10
If stamina becomes 0:
sprint stops
print "Player is exhausted"

Your task:

create the logic
simulate one sprint action
print remaining stamina */


#include<iostream>
using namespace std;

int stamina = 100;
int sprintCost = 20;
bool isSprinting = false;

int main()
{
    if (stamina > 0)
    {
      isSprinting = true;
    }

    else
    {
      isSprinting = false;
      cout << "Out of stamina!!" << endl;
    }

    // Ending Stamina Check

    if (stamina > 0 && isSprinting)
    {
      stamina -= sprintCost;
      cout << "Sprinting... Stamina left: " << stamina << endl;
    }

    else
    {
      cout << "Cannot sprint. Not enough stamina." << endl;
    }
    return 0;
}