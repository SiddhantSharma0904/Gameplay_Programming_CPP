#include<iostream>
using namespace std;

class Player
{ public:
          int health = 100;
          int damage = 40;
          int stamina = 55;
          int Attack();
};
    bool is_attacking = false;
    bool is_alive = true;

  int Player::Attack()
  {
      is_attacking = true;
      cout<<"Player is Attacking"<<endl;
      return 0;
  }

  int main()
 {
    Player Jack;
    Jack.Attack();
    Jack.stamina -= 15;

    if(Jack.stamina == 0)
    {
        is_attacking = false;
        cout<<"OUT OF STAMINA, Player cannot attack"<<endl;
    }
    else
    {
       is_attacking = true;
       cout<<"Player is Alive!!"<<endl;
    }


    if(Jack.health == 0)
    {
        is_alive = false;
        is_attacking = false;

        cout<<"Player is Dead!!"<<endl;
    }

    else
    {
       is_alive = true;
       is_attacking = true;

       cout<<"Player is Alive"<<endl;
    }
    return 0;
 }