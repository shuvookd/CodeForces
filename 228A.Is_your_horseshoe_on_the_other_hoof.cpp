#include <bits/stdc++.h>
using namespace std;

int main()
{
    int shoe[5], count = 3;
    for(int i = 0; i<4; i++)
    {
        cin>>shoe[i];
    }
    sort(shoe, shoe + 4);
    for(int i = 0; i<3; i++)
    {
        if(shoe[i] != shoe[i+1])
        {
            count--;
        }
    }
    cout<< count;
    return 0;
}
