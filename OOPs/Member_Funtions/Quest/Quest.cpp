#include<iostream>
using namespace std;

 class Quest
 {  public:
        string Quest_Name = "Forge Sword";
         int reward_gold = 100;
         bool isAccepted = false;
         bool isCompleted = false;

         int AcceptQuest();
 };

 int Quest::AcceptQuest()
 {
    if(isAccepted == false)
    {
        isAccepted = true;
        cout<<"Quest Accepted"<<endl;
    }
    else
    {
       cout<<"Quest Already Accepted"<<endl;
    }
    return 0;
}

int main()
{
    Quest forgeSword;
    forgeSword.AcceptQuest();
    return 0;
}