#include<iostream>
using namespace std;

int max_enemies = 5;
int enemy_count;

bool is_enemy_spawned = false;
bool enemy_died = false;
bool is_next_wave_started = false;

int main()
{
    if(enemy_count < max_enemies && !is_enemy_spawned)
    {
        cout << "Enemy Spawned!" << endl;
        enemy_count++;
        is_enemy_spawned = true;
    }

    if(enemy_died)
    {
        cout << "Enemy Died!" << endl;
        enemy_count--;
        is_enemy_spawned = false;
    }

    if(enemy_count == 0 && !is_next_wave_started)
    {
        enemy_died = true;
        cout << "Next Wave Started!" << endl;
        is_next_wave_started = true;
    }
    
    return 0;
}