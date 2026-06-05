/*Enemy behavior rules:

 If player distance is less than 10:
 enemy attacks
 Otherwise:
 enemy patrols

 Additional rule:

 if enemy health becomes 0:
 enemy dies
 enemy cannot attack or patrol

 Your task:

 create enemy state logic
 simulate one distance value
 simulate enemy health
 print what enemy is doing*/


#include<iostream>
using namespace std;

int playerDistance; // Simulate player distance
int enemyHealth; // Simulate enemy health
bool isEnemyAttacking = false;
bool isEnemyPatrolling = true;
bool isEnemyDead = false;

int main()
{

    if (playerDistance <=10)
    {
     isEnemyAttacking = true;
     isEnemyPatrolling = false;
    }

    else
    {
     isEnemyAttacking = false;
     isEnemyPatrolling = true;
    }

    if(enemyHealth == 0)
    {
        isEnemyDead = true;
        isEnemyAttacking = false;
        isEnemyPatrolling = false;
    }
  return 0;
}

