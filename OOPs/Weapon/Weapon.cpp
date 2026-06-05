#include <iostream>
using namespace std;

bool is_firing = false;

class Ragdor
{
    public:
            string name = "Ragdor";
            int ammo = 40;
            int damage = 150;
};

class Ghost
{
    public:
            string name = "Ghost";
            int ammo = 15;
            int damage = 50;
};

int main()
{
   Ragdor weapon1;
   Ghost weapon2;
  
   cout << "Weapon 1: " << weapon1.name << " with " << weapon1.ammo << " ammo and " << weapon1.damage << " damage." << endl;
   cout << "Weapon 2: " << weapon2.name << " with " << weapon2.ammo << " ammo and " << weapon2.damage << " damage." << endl;

   if(is_firing)
   {
       cout << "Player is firing." << endl;
       weapon1.ammo--;
       weapon2.ammo--;
   }
   else
   {
       cout << "Player is not firing." << endl;
   }

   if(weapon1.ammo == 0 && weapon2.ammo == 0)
   {
       cout << "Reload!!  Out of ammo " << weapon1.name << "!" << endl;
       cout << "Reload!!  Out of ammo " << weapon2.name << "!" << endl;
   }
   else
   {
       cout << "Ammo remaining: " << weapon1.ammo << " for " << weapon1.name<< endl;
       cout << "Ammo remaining: " << weapon2.ammo << " for " << weapon2.name<< endl;
   }
   return 0;
}