#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int coin[n], total_sum = 0, sum = 0, count =0;
    for(int i=0; i<n; i++)
    {
        cin>> coin[i];
        total_sum+=coin[i];

    }
    int half = total_sum/2;
    sort(coin,coin+n);
    for(int i=n-1; i>=0; i--)
    {
        sum += coin[i];
        count++;
        if(sum>half)
        {
            break;
        }
    }
    cout<<count;
    return 0;
}
