#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, count;
    cin>>x;
    count = x/5;
    if(x % 5 != 0){
        count++;
    }
    cout<<count;
return 0;
}
