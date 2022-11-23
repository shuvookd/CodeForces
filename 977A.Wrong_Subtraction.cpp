#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0, k, sub;
    cin>>n >>k;
    for(int i = 0; i<k; i++)
    {
        sub = n % 10;
        if(sub == 0)
        {
            n = n / 10;
        }
        else
        {
            n = n-1;
        }
    }
    cout<<n;
    return 0;
}
