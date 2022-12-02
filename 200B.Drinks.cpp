#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double ans = 0.0, sum = 0.0;
    cin>> n;
    int drinks[n];
    for(int i = 0; i < n; i++){
        cin>>drinks[i];
        sum = sum + drinks[i];
    }
    ans = sum/n;
    cout<<fixed<<setprecision(12)<<ans<<endl;
return 0;
}
