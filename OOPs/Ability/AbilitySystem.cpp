#include<iostream>
using namespace std;

class Ability
{
    public:
            string Ability_name = "Super Jump";
            int cooldown = 3;
            int mana = 50;
            bool is_unlocked = true;
            bool is_cooldown_active = false;            
};

int main()
{
    Ability superjump;
    
    if(superjump.mana >= 25)
    {
        superjump.is_unlocked = true;
        superjump.is_cooldown_active = true;
        // Use the ability

        cout << "Using " << superjump.Ability_name << " ability!" << endl;
        cout << "Cooldown: " << superjump.cooldown << " seconds" << endl;
    }

            if(superjump.is_unlocked)
        {
            superjump.mana--;
            superjump.is_cooldown_active = true;
            cout << "Using " << superjump.Ability_name << " ability!" << endl;
        }
        else
            {
                cout << "Not enough mana to use " << superjump.Ability_name << " ability!" << endl;
            }

            return 0;
}
