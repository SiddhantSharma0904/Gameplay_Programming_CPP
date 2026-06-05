#include<iostream>
using namespace std;

bool is_Inventory_Full = false;
bool can_Pickup_Item = true;
bool door_unlocked = false;

class Inventory{
    public:
            int max_Items = 10;
            int current_Items;
            bool has_Key = false;
};

int main()
{
    Inventory player1;
    Inventory player2;
    
    if(player1.current_Items == player1.max_Items)
    {
        is_Inventory_Full = true;
        can_Pickup_Item = false;

        cout << "Player 1's inventory is full. Cannot pick up more items." << endl;
    }
    else
    {
        can_Pickup_Item = true;
        player1.current_Items++;
        cout << "Player 1 picked up an item. Current items: " << player1.current_Items << endl;
    }

    if(player2.current_Items == player2.max_Items)
    {
        is_Inventory_Full = true;
        can_Pickup_Item = false;

        cout << "Player 2's inventory is full. Cannot pick up more items." << endl;
    }
    else
    {
        can_Pickup_Item = true;
        player2.current_Items++;
        cout << "Player 2 picked up an item. Current items: " << player2.current_Items << endl;
    }

     if(player1.has_Key && player2.has_Key)
    {
        door_unlocked = true;
        cout << "Players have keys. The door is now unlocked." << endl;
    }
    else
    {
        door_unlocked = false;
        cout << "Players do not have keys to unlock the door." << endl;
    }
    return 0;
}