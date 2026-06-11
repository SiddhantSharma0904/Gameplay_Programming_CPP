#include<iostream>
using namespace std;

class Enemy
{ public:
            int health;
            int damage;
            bool is_Alive;

             Enemy(int h, int d)
            {
                health = h;
                damage = d;
               cout<<"Enemy Created"<<endl;
               is_Alive = true;
            }

};

int main()
{
    Enemy zombie(100 ,20);
    Enemy boss(500 , 80);

    cout<<"Health of Zombie "<< zombie.health <<endl;
    cout<<"Health of Boss "<< boss.health <<endl;
    
    cout<<"Damage By Zombie "<< zombie.damage <<endl;
    cout<<"Damage By Boss "<< boss.damage <<endl;

}

