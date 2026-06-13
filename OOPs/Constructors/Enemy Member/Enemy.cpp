#include<iostream>
using namespace std;

class Enemy
{ public:

    string name;
    int health;
    int damage;
    bool is_Alive;
    
    int Attack();

    Enemy( string n, int h, int d)
    {
        name = n;
        health = h;
        damage = d;
        is_Alive = true;
    };
};

   int Enemy::Attack()
   {
     if(is_Alive == true)
     cout<<"Enemy Name "<< name <<" Damage: "<< damage <<endl;

     else
     cout<<"Enemy Name "<< name <<endl;
     
     return 0;
   }

   int main()
   {

    Enemy zombie("Zombie", 100 , 15);
    Enemy boss("Boss" , 500 , 50);

    zombie.Attack();
    boss.Attack();

    return 0;
   }
