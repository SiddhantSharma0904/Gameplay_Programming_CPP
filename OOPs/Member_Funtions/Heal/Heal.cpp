#include<iostream>
using namespace std;

class Player
{ public:
    int Health = 80;
    int Max_Health = 100;
    bool is_Alive = true;
    bool can_Heal = false;

    int Heal();
};

int Player::Heal()
{
    if (Health <= 0)
    {
        cout << "Player DEAD!!" << endl;
        is_Alive = false;
        can_Heal = false;
        return Health;
    }

    if (Health >= Max_Health)
    {
        Health = Max_Health;
        can_Heal = false;
        cout << "Health Already FULL!!" << endl;
        return Health;
    }

    can_Heal = true;
    Health += 20;
    if (Health > Max_Health)
        Health = Max_Health;

    if (Health == Max_Health)
    {
        can_Heal = false;
        cout << "Health Already FULL!!" << endl;
    }
    else
    {
        cout << "Player Healed" << endl;
    }

    return Health;
}
 
int main()
{
    Player player;
    cout << "Before heal: " << player.Health << endl;
    player.Heal();
    cout << "After heal: " << player.Health << endl;
    return 0;
}
