#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w, sub_total = 0, total, due;
    cin>>k >>n >>w;
    for(int i = 1; i<= w; i++)
    {
        total = i * k;
        sub_total = sub_total + total;
    }
    due = sub_total - n;
    if(due < 0)
    {
        cout<< 0;
    }
    else
    {
        cout<<due;
    }
    return 0;
}
