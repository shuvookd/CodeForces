#include <bits/stdc++.h>
using namespace std;

int main()
{
    string user_name;
    int count = 0 ;
    cin >> user_name;
    sort(user_name.begin(), user_name.end());
    for(int i = 0; i < user_name.size(); i++)
    {
        if(user_name[i] == user_name[i+1])
        {
            continue;
        }
        if(user_name[i] != user_name[i+1])
        {
            count++;
        }
    }
    if(count % 2 == 0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<< endl;
    }

    return 0;
}
