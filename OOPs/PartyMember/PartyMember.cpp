#include<iostream>
using namespace std;

class PartyMember
{ public:
         string member_name;
         int health = 100;
         int mana = 50;
         string role;
         bool is_alive = true;
         
  bool is_attacking;
  bool is_using_mana;
  bool is_healing;
};


int main()
{
   PartyMember Warrior;
   PartyMember Mage;
   PartyMember Healer;

   if(Warrior.is_alive)
   {
     Warrior.is_attacking = true;
     Warrior.is_healing = false;
     Warrior.is_using_mana = false;
     cout<<"Warrior Attacks Enemy!!"<<endl;
   }
    
   if(Mage.is_alive)
   {
      Mage.is_using_mana = true;
      Mage.is_attacking = false;
      Mage.is_healing = false;
      cout<<"Mage Uses Mana Ability"<<endl;
   }

   if(Healer.is_alive)
   {
    Healer.is_healing = true;
    Healer.is_attacking = false;
    Healer.is_using_mana = false;
    cout<<"Healer is healing teammates!!"<<endl;
   }

   if(Warrior.health == 0)
   {
      Warrior.is_alive = false;
      Warrior.is_attacking = false;
      cout<<"Warrior is DEAD!!"<<endl;
   }

   if(Mage.health == 0)
   {
    Mage.is_alive = false;
    Mage.is_using_mana = false;
    cout<<"Mage is DEAD!!"<<endl;
   }

   if(Healer.health == 0)
   {
     Healer.is_alive = false;
     Healer.is_healing = false;
     cout<<"Healer is DEAD!!"<<endl;
   }
}