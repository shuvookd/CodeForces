#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin>>n;
    int magnet[100000];
    for(int i = 0; i<n; i++)
    {
        cin>>magnet[i];
    }
    for(int i = 0; i<n; i++)
    {
        if(magnet[i] != magnet[i+1])
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
