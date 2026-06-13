#include<iostream>
using namespace std;

class NPC
{public:
    string name;
    string dialogue;
    bool is_friendly;

    void Talk();

    NPC(string n , string d)
    {
        name = n;
        dialogue = d;
        is_friendly = true;
    };

};

void NPC::Talk()
{
  if(is_friendly == true)
  {
    cout<<name<<":"<<dialogue<<endl;
  }
  else
  cout<<name<<":"<<" Refuses to Talk!!"<<endl;

}

int main()
{
    NPC gaurd("Gaurd", " Welcome to the city!!");
    NPC merchent("Merchent" , " Take a look at my goods");

    gaurd.Talk();
    merchent.Talk();

    return 0;
}