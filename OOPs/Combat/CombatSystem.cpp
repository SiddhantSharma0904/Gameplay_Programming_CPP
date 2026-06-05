#include <iostream>
using namespace std;

bool is_Player_Attacking = false;
bool is_Enemy_Attacking = false;

class Player
{  public:
         int health = 100;
         int damage = 25;
         int stamina = 100;
         bool isAlive = true;
};

class Enemy
{  public:
         int health = 100;
         int damage = 20;
         bool isAlive = true;
};

int main()
{
    Player player;
    Enemy enemy;

    if(player.health <= 0)
    {
        player.isAlive = false;
        cout << "Player is dead." << endl;
    }
    else
    {
        cout << "Player is alive." << endl;
        player.isAlive = true;
    }

    if(enemy.health <= 0)
    {
        enemy.isAlive = false;
        cout << "Enemy is dead." << endl;
    }
    else
    {
        cout << "Enemy is alive." << endl;
        enemy.isAlive = true;
    }

    if(is_Player_Attacking)
    {
        enemy.health -= player.damage;
        cout << "Player attacks Enemy for " << player.damage << " damage." << endl;
    }
    else
    {
        cout << "Player is not attacking." << endl;
    }

    if(is_Enemy_Attacking)
    {
        player.health -= enemy.damage;
        cout << "Enemy attacks Player for " << enemy.damage << " damage." << endl;
    }
    else
    {
        cout << "Enemy is not attacking." << endl;
    }

    if(player.stamina <= 0)
    {
        cout << "Player is exhausted and cannot attack." << endl;
        is_Player_Attacking = false;
    }
    else
    {
        cout << "Player has enough stamina to attack." << endl;
        is_Player_Attacking = true;
    }
}