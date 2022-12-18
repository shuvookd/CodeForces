#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, even = 0, odd = 0;
    cin>>n;
    int box[n];
    for(int i=0; i<n; i++){
        cin>>box[i];
        if(box[i]%2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    if(even>odd){
        for(int i = 0; i<n; i++){
            if(box[i]%2 != 0){
                cout<<i+1;
                break;
            }
        }
    }
    else{
        for(int i = 0; i<n; i++){
            if(box[i]%2 == 0){
                cout<<i+1;
                break;
            }
        }
    }

return 0;
}
