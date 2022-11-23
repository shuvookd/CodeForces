#include <bits/stdc++.h>
using namespace std;

int main()
{
    string football;
    int count = 1;
    cin>> football;
    for(int i=1; i<football.size(); i++)
    {
        if(football[i] == football[i-1])
        {
            count++;
            if(count == 7)
            {
                cout<<"YES";
                return 0;
            }
        }
        else
        {
            count=1;
        }
    }
    cout<<"NO";
    return 0;
}
