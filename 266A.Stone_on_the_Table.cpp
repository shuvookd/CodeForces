#include <bits/stdc++.h>
using namespace std;

int main()
{
    string stone;
    int count = 0, n ;
    cin>> n;
    cin >> stone;
    for(int i = 0; i < n; i++)
    {
        if(stone[i] == stone[i+1])
        {
           count++;
        }
        if(stone[i] != stone[i+1])
        {
            continue;
        }
    }
    cout << count;

    return 0;
}
