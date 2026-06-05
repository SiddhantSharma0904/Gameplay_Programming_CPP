#include <iostream>
using namespace std;

int gold = 200;
int swordPrice = 100;
int shieldPrice = 150;
int potionPrice = 50;
bool hasInInventory = false;

int main()
{
    if(gold >= swordPrice)
    {
        gold -= swordPrice;
        hasInInventory = true;
    }
    else
    {
        cout << "Not enough gold" << endl;
    }
    
    if(gold >= shieldPrice)
    {
        gold -= shieldPrice;
        hasInInventory = true;
    }
    else
    {
        cout << "Not enough gold" << endl;
    }

    if(gold >= potionPrice)
    {
        gold -= potionPrice;
        hasInInventory = true;
    }
    else
    {
        cout << "Not enough gold" << endl;
    }

}
