#include<iostream>
using namespace std;

class Boss
{
public:
    string name = "Rhondo";

    int health = 100;
    int damage = 85;

    bool isAlive = true;
    bool isEnraged = false;
    bool isAttacking = false;
};

int currentPhase = 1;
bool isBattleOver = false;

int main()
{
    Boss Rhondo;

    while(Rhondo.isAlive)
    {

        // Phase Logic
        if(Rhondo.health >= 50)
        {
            currentPhase = 1;
        }
        else if(Rhondo.health >= 20)
        {
            currentPhase = 2;
        }
        else if(Rhondo.health > 0)
        {
            currentPhase = 3;
        }

        // Phase 1
        if(currentPhase == 1)
        {
            cout << Rhondo.name << " is in Phase 1.\n";

            Rhondo.isEnraged = false;
            Rhondo.isAttacking = true;
        }

        // Phase 2
        else if(currentPhase == 2)
        {
            cout << Rhondo.name << " has entered Phase 2!\n";

            Rhondo.isEnraged = false;
            Rhondo.isAttacking = true;
        }

        // Phase 3
        else if(currentPhase == 3)
        {
            cout << Rhondo.name << " has entered Phase 3!\n";

            Rhondo.isEnraged = true;
            Rhondo.isAttacking = true;
        }

        // Boss Status
        cout << "Boss Health: " << Rhondo.health << endl;

        // Simulated Player Attack
        cout << "Player attacks Rhondo for 30 damage!\n";

        Rhondo.health -= 30;

        // Death Check
        if(Rhondo.health <= 0)
        {
            Rhondo.health = 0;

            Rhondo.isAlive = false;
            isBattleOver = true;

            cout << "\n" << Rhondo.name<< " has been defeated!"<<endl;

            cout << "Battle Over!\n";
        }
    }

    return 0;
}