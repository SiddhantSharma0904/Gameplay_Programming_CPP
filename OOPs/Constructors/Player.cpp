#include<iostream>
using namespace std;

class Player
{ public:
         int health;
         int stamina;
         int ammo;

   Player()
   {
        health = 100;
        stamina = 50;
        ammo = 30;
   };
};

 int main()
 {
    Player player1;

    cout<<"Player's Health "<< player1.health <<endl;
    cout<<"Player's Stamina "<< player1.stamina <<endl;
    cout<<"Player's ammo  "<< player1.ammo <<endl;

    return 0;
 }