#include <bits/stdc++.h>
using namespace std;
int main()
{
    string sum;
    cin>>sum;
    for(int i=0; i<sum.size(); i+=2){
        for(int j=0; j<sum.size()-1; j+=2){
            if(sum[j]>sum[j+2]){
               swap(sum[j],sum[j+2]);
            }
        }
    }
    cout<<sum;
    return 0;
}
