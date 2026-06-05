/*Player inventory can hold maximum 3 items

Rules:

Player can pick up:
Sword
Potion
Key
If inventory is full:
print "Inventory Full"
If player has a key:
door can unlock

Your task:

create inventory logic
store items
check inventory size
check if player has key*/

#include <iostream>
using namespace std;

int maxitems = 3;
string inventory[3] = {"Sword", "Potion", "Key"};
bool hasKey = false;
bool isinventoryFull = false;

int main()
{
    if(sizeof(inventory)>= maxitems)
    {
        isinventoryFull = true;
        cout << "Inventory Full" << endl;
    }
    else
    {
        cout << "You can pick up more items." << endl;
    }

    if(hasKey == true)
    {
       cout<<"Insert key to unlock the door."<<endl;
    }
    else
    {
        cout<<"You don't have a key to unlock the door."<<endl;
    }
    return 0;
}