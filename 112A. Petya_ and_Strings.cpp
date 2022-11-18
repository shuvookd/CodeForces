#include <iostream>
#include <string>
using namespace std;
string a, b;
int main() {
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++) {
        if(a[i]==b[i]){
            cout<<"0";
            break;
        }
        else if(a[i]<b[i]){
            cout<<"-1";
            break;
        }
        else if(a[i]>b[i]){
            cout<<"-1";
            break;
        }
        }

return 0;
}
