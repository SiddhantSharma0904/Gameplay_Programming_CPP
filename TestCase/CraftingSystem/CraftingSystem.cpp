#include<iostream>
using namespace std;

int wood = 2;
int iron = 1;

int materials_needed_for_sword = 5;
int material_count = 3;
bool can_craft_sword = false;
bool has_required_materials = false;
bool is_sword_added_to_inventory = false;


int main()
{
    if(material_count >= materials_needed_for_sword)
    {
        has_required_materials = true;
        can_craft_sword = true;
        cout << "Sword added to inventory." << endl;
        is_sword_added_to_inventory = true;
        wood -= 5;
        iron -= 5;
    }
    else
    {
        has_required_materials = false;
        can_craft_sword = false;
        cout << "You do not have enough materials to craft a sword." << endl;
        is_sword_added_to_inventory = false;
    }
    return 0;
}