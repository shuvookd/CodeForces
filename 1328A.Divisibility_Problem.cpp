#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a,b,ans;
    cin>>a>>b;
    if(a%b==0)
    {
        cout<<0<<endl;
    }
    else
    {
        ans = a % b;
        cout<< b - ans<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}