#include<iostream>
using namespace std;

bool canPlayerTalk = false;
class Npc
{
    public:
    string name;
    string dialogue = "Hi, How are you?";
    bool isFriendly = true;
    bool hasQuest = false;
    bool ishostile = false;
    bool dialogueChanged = false;   
};

int main()
{
    Npc npc1;
    Npc npc2;

    npc1.name = "Gaurd";
    npc2.name = "Merchant";

    if(npc1.isFriendly)
    {
        cout << npc1.name << " says: " << npc1.dialogue << endl;
        canPlayerTalk = true;
    }
    else
    {
        cout << npc1.name << " is not friendly." << endl;
        canPlayerTalk = false;
    }

    if(npc1.hasQuest)
    {
        cout << npc1.name << " has a quest for you." << endl;
        canPlayerTalk = true;
    }
    else
    {
        cout << npc1.name << " does not have any quests for you." << endl;
    }



    if(npc2.isFriendly)
    {
        cout << npc2.name << " says: " << npc2.dialogue << endl;
        canPlayerTalk = true;
    }
    else
    {
        cout << npc2.name << " is not friendly." << endl;
        canPlayerTalk = false;
    }

    if(npc2.hasQuest)
    {
        cout << npc2.name << " has a quest for you." << endl;
        canPlayerTalk = true;
    }
    else
    {
        cout << npc2.name << " does not have any quests for you." << endl;
    }

    if(npc1.ishostile)
    {
        cout << npc1.name << " is hostile towards you." << endl;
        canPlayerTalk = false;
        npc1.dialogueChanged = true;
    }
    else
    {
        cout << npc1.name << " is not hostile towards you." << endl;
        canPlayerTalk = true;
        npc1.dialogueChanged = false;
    }

      if(npc2.ishostile)
    {
        cout << npc2.name << " is hostile towards you." << endl;
        canPlayerTalk = false;
        npc2.dialogueChanged = true;
    }
    else
    {
        cout << npc2.name << " is not hostile towards you." << endl;
        canPlayerTalk = true;
        npc2.dialogueChanged = false;
    }
}