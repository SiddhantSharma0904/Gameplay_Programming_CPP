#include<iostream>
using namespace std;

int Combo_Counter = 0;
int stamina = 100;
int wait_Time = 5;

bool attack_continously = false;
bool combo_counter_reset = false;
bool special_attack = false;

int main()
{
   if(attack_continously)
   {
      Combo_Counter++;
      stamina -= 10;
      wait_Time = 5;
   }
   else
   {
      combo_counter_reset = true;
      Combo_Counter = 0;
      stamina = 100;
      wait_Time = 5;
   }
       if(Combo_Counter == 3)
       {
          special_attack = true;
       }
       else
       {
          special_attack = false;
       }

       if(wait_Time > 5)
       {
          combo_counter_reset = true;
          Combo_Counter = 0;
          stamina = 100;
          wait_Time = 5;
       }
}