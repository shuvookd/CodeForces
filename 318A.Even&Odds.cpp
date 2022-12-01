#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k, step;
    cin>> n>> k;
    if(n % 2 == 0){
        step = n / 2;
    }
    else{
        step = (n + 1) / 2;
    }
    if(k <= step){
        cout<< (k * 2) - 1;
    }
    else
        cout<< (k - step) * 2;


return 0;
}
