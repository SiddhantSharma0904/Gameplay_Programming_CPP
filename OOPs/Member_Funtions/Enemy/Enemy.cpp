#include<iostream>
using namespace std;

class Enemy
{
public:
    int Health = 100;
    int Damage = 50;
    
bool is_Alive = true;

    void TakeDamage();
};



void Enemy::TakeDamage()
{
    Health -= 15;
    cout << "Remaining Health " << Health << endl;
}

int main()
{
    Enemy enemy;
    enemy.TakeDamage();

    if (enemy.Health <= 0)
    {
        enemy.is_Alive = false;
        cout << "Enemy Defeated" << endl;
    }

    return 0;
}
   
