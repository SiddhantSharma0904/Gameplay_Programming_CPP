#include<iostream>
using namespace std;

bool playersaidyes = false;
bool isqueststarted = false;
bool isnpcdisappointed = false;
bool isnpcfriendly = true;
bool npcoffersquest = true;
string playername = "Rohan";
string npcname = "NPC";
string willyouhelpme = "Will you help me?";

int main()
{
   if(willyouhelpme == "Will you help me?")
   {
      cout << npcname << ": " << willyouhelpme << endl;
      cout << playername << ": Yes, I will help you." << endl;
      npcoffersquest = true;
      playersaidyes = true;
   }
   else
    {
        cout << npcname << ": " << willyouhelpme << endl;
        cout << playername << ": No, I will not help you." << endl;
        playersaidyes = false;
        isnpcdisappointed = true;
        isnpcfriendly = false;
    }

    if(playersaidyes == true)
    {
        isqueststarted = true;
        cout << npcname << ": Thank you for agreeing to help me!" << endl;
        isnpcfriendly = true;
    }
    else
    {
        isqueststarted = false;
        cout << npcname << ": That's disappointing. I hope you change your mind." << endl;
        isnpcfriendly = false;
        isnpcdisappointed = true;
    }

    if(isqueststarted == true && npcoffersquest == true)
    {
        cout << npcname << ": I have a quest for you. Please go to the forest and find the magical flower." << endl;

    }
    else
    {
        cout << npcname << ": I understand if you don't want to help. Maybe another time." << endl;
    }
}



