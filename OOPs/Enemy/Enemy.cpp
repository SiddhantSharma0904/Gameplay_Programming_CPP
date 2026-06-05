#include <iostream>
using namespace std;

class Enemy
{
    public:
         int health = 150;
         int damage = 25;
         bool is_alive = true;
};

int main()
{
    Enemy enemy1;
    Enemy enemy2;

    if(enemy1.health <= 0)
    {
        enemy1.is_alive = false;
        cout << "Enemy 1 is dead." << endl;
    }
    else
    {
        cout << "Enemy 1 is alive with " << enemy1.health << " health." << endl;
    }

    if(enemy2.health <= 0)
    {
        enemy2.is_alive = false;
        cout << "Enemy 2 is dead." << endl;
    }
    else
    {
        cout << "Enemy 2 is alive with " << enemy2.health << " health." << endl;
    }

    return 0;
}