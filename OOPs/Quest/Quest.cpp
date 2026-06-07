 #include<iostream>
 using namespace std;

 class quest
 { public:
        string quest_name = "Build Sword";
        int reward_gold = 100;
        bool is_completed = false;
        bool is_accepted = false;
      
 };
      bool isrewarded = false; 
      int player_gold;

    int main()
    {
       quest BuildSword;

       if (BuildSword.is_accepted == true)
       {
              cout<<"Quest Accepted"<<endl;
              BuildSword.is_completed = false;
       }
       else 
       {
          cout<<"Quest not accepted"<<endl;
       }

       if(BuildSword.is_completed == true && BuildSword.is_accepted == true)
       {
              isrewarded = true;
              cout<<"You are rewarded with 100 gold"<<endl;
              player_gold += 100;
       }
       else
       {
              isrewarded = false;
       }
          
    }