#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, k = 0;
    cin >> a>> b;
    while(a <= b)
    {
        a = 3 * a;
        b = 2 * b;
        k++;
    }
    cout<<k;
    return 0;
}
