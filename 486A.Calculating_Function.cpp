#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, total;
    cin>> n;
    if(n % 2 == 0){
        total = n / 2;
    }
    else{
        total = ((n+1)/2) * -1;
    }
    cout<<total;
    return 0;
}
