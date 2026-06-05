/*Rules:

Game starts at:
Wave 1
Each wave has:
5 enemies
When all enemies are defeated:
next wave starts
enemy count resets to 5
If wave reaches 3:
print "Boss Wave Started"

Your task:

simulate enemy defeats
update enemy count
trigger next wave
handle boss wave condition*/

#include <iostream>
using namespace std;

int wavesize = 5;
int currentwave;
bool bossWaveStarted = false;
bool wavecleared = false;

int main()
{
    if(wavecleared == true)
    {
        currentwave++; // Increment wave number
        wavesize+=5; // Increment enemy count for next wave
        
        cout << "Wave " << currentwave << " started with " << wavesize << " enemies." << endl;

        if(currentwave == 3)
        {
            bossWaveStarted = true;
            cout << "Boss Wave Started!" << endl;
        }
    }
    else
    {
        cout << "Defeat all enemies to clear the wave." << endl;
    }
}