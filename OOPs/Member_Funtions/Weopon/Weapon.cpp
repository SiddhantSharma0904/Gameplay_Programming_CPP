#include<iostream>
using namespace std;

class Weapon
{ public:
           string Weapon_Name;
           int Ammo = 12;
           int Max_Ammo = 40;
           int damage = 125;
           bool can_reload = true;

           int Reload();

};
    int Weapon::Reload()
    {
        if(can_reload == true)
        {
            Ammo = Max_Ammo;
            cout<<"Weapon Reloaded "  << Weapon_Name <<  Ammo << endl;
        }
        else
        cout<<"Reload Weapon"<<endl;

        if(Ammo == Max_Ammo)
        {
            can_reload = false;
            cout<<"Ammo Already Full"<<endl;
        }
        else
        {
            can_reload = true;
        }
         return 0;
    }

    int main()
    {
        Weapon Pistol;
        Weapon Rifle;
        
        Pistol.Weapon_Name = "Pistol";
        Rifle.Weapon_Name = "Rifle";
        Pistol.Reload();
        Rifle.Reload();

        return 0;
    }
  
 