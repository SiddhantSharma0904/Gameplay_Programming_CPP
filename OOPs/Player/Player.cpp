#include<iostream>
using namespace std;

class Player
{
    public:
         int health = 100;
         int stamina = 50;
         int ammo = 12;
};

bool is_sprinting = false;
bool is_shooting = false;

int main()
{
   Player player1;
   cout<< "Player 1 is created with "<< player1.health << " health, "<< player1.stamina << " stamina and " << player1.ammo << " ammo." << endl;

   if(is_sprinting)
   {
       cout << "Player is sprinting." << endl;
       player1.stamina--;
   }
   else
   {
       cout << "Player is not sprinting." << endl;
   }

   if(is_shooting)
   {
       cout << "Player is shooting." << endl;
       player1.ammo--;
   }
   else
   {
       cout << "Player is not shooting." << endl;
   } return 0;
}