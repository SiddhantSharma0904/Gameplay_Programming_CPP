#include<iostream>
using namespace std;

int playermana = 100;
bool isfireblastactive = false;
bool iscooldownstarted = false;
int cooldowntime = 5; // Cooldown time in seconds
bool isabilityused = false;


int main()
{
   if (iscooldownstarted == false)
   {
       cout << "Player used Fire Blast!" << endl;
       playermana -= 20; // Reduce mana by 20
       isfireblastactive = true;
       isabilityused = true;
       iscooldownstarted = true;
   }
   else
   {
       cout << "Fire Blast is on cooldown. Please wait." << endl;
   }

   if(playermana < 20)
   {
       cout << "Not enough mana to use Fire Blast!" << endl;
       isfireblastactive = false;
   }
}