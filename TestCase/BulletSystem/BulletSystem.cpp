/*Question:
A gun has:

30 bullets

Rules:

Each shot decreases ammo by 1
Player can shoot only if ammo > 0
If ammo becomes 0:
print "Reload Required"

Your task:

simulate one shot
reduce ammo
print remaining ammo
handle empty ammo condition*/

#include<iostream>
using namespace std;

int bulletcount = 30;
bool isfired = false;
bool canfire = true;

int main()
{
    if (isfired == true)
    {
     cout << "Bullet is fired" << endl;
     bulletcount--;
     cout << "Remaining bullet count: " << bulletcount << endl;
    }

    if (bulletcount == 0)
    {
        cout << "Reload Required" << endl;
        canfire = false;
    }
    return 0;
}
