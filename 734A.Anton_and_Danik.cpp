#include <bits/stdc++.h>
using namespace std;

int main()
{
    int game, countA = 0, countB = 0;
    string result;
    cin>>game;
    for(int i = 0; i<game; i++)
    {
        cin>> result;
        if(result[i] == 'A')
        {
            countA++;
        }
        else
            countB++;
    }
    if(countA>countB)
    {
        cout<<"Anton";
    }
    else if(countA<countB)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
    return 0;
}
