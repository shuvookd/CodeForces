#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,count = 0;
    cin>>n;
    int problem[n];
    for(int i = 0; i<n; i++){
        cin>>problem[i];
        if(problem[i] == 1){
            count++;
        }
    }
    if(count >= 1){
        cout<<"HARD";
    }
    else
        cout<<"EASY";
return 0;
}
