 /* Rules:

Player starts with:
0 score
0 coins
Each collected coin:
increases coin count by 1
increases score by 10
If score reaches 100:
unlock bonus reward

Additional rule:

if player collects a special coin:
add extra 50 score

Your task:

simulate collecting coins
update score
handle bonus unlock
handle special coin logic*/

#include <iostream>
using namespace std;

int coins = 0;
int score = 0;
bool hascoin = false;
bool bonusUnlocked = false;
int specialCoinScore = 50;

int main()
{
    if (hascoin==true)
    {
        coins++;
        score += 10;
        cout << "Coin collected! Total coins: " << coins << ", Score: " << score << endl;

        if (score == 100 && !bonusUnlocked)
        {
            bonusUnlocked = true;
            score += specialCoinScore; // Add special coin score
            cout << "Bonus reward unlocked!" << endl;
        }
    }
    else
    {
        cout << "No coin collected." << endl;
    }
}