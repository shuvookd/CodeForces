#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x = 0;
    string str;
    cin >> n;
    for(int i=1; i<=n; i++){
            cin >> str;
        if(str[1] == '+'){
            x++;
        }
        else if(str[1] == '-'){
            x--;
        }
    }
cout << x;
return 0;
}
