/*Game has:
5 levels

Rules:

Level 1 is unlocked by default
Next level unlocks only if previous level is completed

Example:

if Level 1 completed → unlock Level 2
if Level 2 completed → unlock Level 3

Your task:

create logic for unlocking levels
simulate completing one level
print which level gets unlocked */


#include<iostream>
using namespace std;

struct Level
{
   int LevelNumber;
   bool isCompleted= false;
   bool isUnlocked= false;
};

Level levels[5];

int main()
{
    levels[0].LevelNumber = 1;
    levels[1].LevelNumber = 2;
    levels[2].LevelNumber = 3;
    levels[3].LevelNumber = 4;
    levels[4].LevelNumber = 5;

    levels[0].isCompleted = true; // Simulate completing Level 1

    if(levels[0].isCompleted == true)
    {
        levels[1].isUnlocked = true;
        cout << "Level 2 is unlocked!" << endl;
    }

    if(levels[1].isCompleted == true)
    {
        levels[2].isUnlocked = true;
        cout << "Level 3 is unlocked!" << endl;
    }

    if(levels[2].isCompleted == true)
    {
        levels[3].isUnlocked = true;
        cout << "Level 4 is unlocked!" << endl;
    }

    if(levels[3].isCompleted == true)
    {
        levels[4].isUnlocked = true;
        cout << "Level 5 is unlocked!" << endl;
    }

    if(levels[4].isCompleted == true)
    {
        cout << "Congratulations! You Won!!"<<endl;
    }
    return 0;
}