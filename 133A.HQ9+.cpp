#include <iostream>
using namespace std;

int main()
{
    string word;
    cin>>word;
    int count=0;
    for(int i=0; i<word.size(); i++)
    {
        if(word[i]=='H'||word[i]=='Q'||word[i]=='9')
            count=1;
    }
    if(count == 1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
