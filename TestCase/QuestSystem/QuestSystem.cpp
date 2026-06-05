#include<iostream>
using namespace std;

int gem;
bool isQuestCompleted = false;
int gemcount = 0;
int maxgem = 3;
bool hasgem = false;
int reward = 100;
bool hasclaimedreward = false;

int main()
{
  if (hasgem == true)
  {
      gemcount++;
      cout << "You have collected a gem! You now have " << gemcount << " gems." << endl;
        if (gemcount == maxgem)
        {
            isQuestCompleted = true;
            cout << "Congratulations! You have collected all the gems and completed the quest!" << endl;
            cout <<"You are rewarded with " << reward << " gold!" << endl;
            hasclaimedreward = true;
        }

        if (isQuestCompleted == true)
        {
            cout << "You have already completed the quest!" << endl;
            hasclaimedreward = false;
        }
  }
}