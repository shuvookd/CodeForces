/*
Input
The first line contains an integer n (1 ≤ n ≤ 100). Each of the following n lines contains one word. All the words consist
of lowercase Latin letters and possess the lengths of from 1 to 100 characters.
Output
Print n lines. The i-th line should contain the result of replacing of the i-th word from the input data.
*/
#include <iostream>
using namespace std;
int main()
{
    string s;
    int n;
    cin >> n;
    while(n--){
        cin >> s;
        if(s.length() > 10){
            cout << s[0] << s.length()-2 << s[s.length()-1] << endl;
        }
        else{
            cout << s << endl;
        }
    }
    return 0;
}
