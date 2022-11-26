#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, count1 = 0, count2 = 0;
    cin>>n >> h ;
    int height[n];
    for(int i = 0; i<n; i++)
    {
        cin>> height[i];
        if(height[i]<= h)
        {
            count1++;
        }
        else
        {
            count2+= 2;
        }
    }
    int sum = count1 + count2;
    cout<< sum;
    return 0;
}
