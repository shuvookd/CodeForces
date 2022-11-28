#include <bits/stdc++.h>
using namespace std;

int main()
{
    int total_room, people, capacity, count = 0;
    cin>>total_room;
    while(total_room--)
    {
        cin>>people>>capacity;
        if(capacity - people >= 2)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
