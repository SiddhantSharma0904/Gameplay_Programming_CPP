#include<iostream>
using namespace std;

int health = 100;
int gold = 50;
int current_Level = 1;
bool is_game_saved = false;
bool current_stat_stored = false;
bool is_save_exists = false;
bool restore_save = false;
bool is_game_loaded = false;



int main()
{
    if (is_game_saved == true) 
    {
        cout << "Game saved successfully!" << endl;
        current_stat_stored = true;
    }
    else
    {
        cout << "Failed to save the game." << endl;
        current_stat_stored = false;
    }

    if(is_game_loaded == true)
    {
        cout << "Game loaded successfully!" << endl;
        restore_save = true;
    }
    else
    {
        cout << "Failed to load the game." << endl;
        restore_save = false;
    }

    if(is_save_exists == false)
    {
        cout << "No save file exists." << endl;
        is_save_exists = false;
        is_game_loaded = false;
    }
    else
    {
        cout << "Save file found." << endl;
        is_save_exists = true;
        is_game_loaded = true;
    }
    return 0;
}