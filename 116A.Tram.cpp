#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, a, b, passenger = 0, max_passenger = 0;
    cin>>n;
    for(i + 0; i<n; i++)
    {
        cin>>a >> b;
        passenger = b - a + passenger;
        if(passenger > max_passenger)
        {
            max_passenger = passenger;
        }
    }
    cout<< max_passenger;
    return 0;
}
