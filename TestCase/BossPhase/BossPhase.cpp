#include<iostream>
using namespace std;

int BossHealth = 100;
bool bossDefeated = false;
bool level1bossalive = true;
bool level1BossDefeated = false;
bool level2BossDefeated = false;
bool level3BossDefeated = false;

int main()
{
 if(level1BossDefeated == false)
 {
  cout << "Level 1 Boss is alive!" << endl;
 }
 else
 {
  cout << "Level 1 Boss is defeated!" << endl;
 }
    if(level2BossDefeated == false)
    {
    cout << "Level 2 Boss is alive!" << endl;
    }
    else
    {
    cout << "Level 2 Boss is defeated!" << endl;
    }
    
    if(level3BossDefeated == false)
    {
    cout << "Level 3 Boss is alive!" << endl;
    }
    else
    {
    cout << "Level 3 Boss is defeated!" << endl;
    }
 
}