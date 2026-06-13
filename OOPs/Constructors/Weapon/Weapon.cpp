#include <iostream>
#include <string>
using namespace std;

class Weapon
{ public:
        string Weapon_Name;
        int ammo;
        int damage;

         Weapon (string n , int a, int d)
        {
          Weapon_Name = n;
          ammo = a;
          damage = d;

          cout << "Weapon Created " << Weapon_Name << " " << ammo << " " << damage << endl;
        };
};

     int main()
     {

       Weapon pistol("Pistol", 12 , 25 );
       Weapon rifle("Ragdor", 30 , 40 );
       
       cout<<"Weapon Name: "<< pistol.Weapon_Name <<"Ammo: "<<pistol.ammo <<"Damage: "<<pistol.damage <<endl;
       cout<<"Weapon Name: "<< rifle.Weapon_Name <<"Ammo: "<<rifle.ammo <<"Damage: "<<rifle.damage <<endl;
          
       return 0;
     }