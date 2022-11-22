#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    int up = 0, low = 0;
    cin>>word;
    for(int i = 0; i<word.size(); i++)
    {
        if(isupper(word[i]))
        {
            up++;
        }
        else
        {
            low++;
        }
    }
    if(up>low)
    {
        string new_word;
        for(int i=0; i<word.size(); i++)
        {
            new_word = toupper(word[i]);
            cout<<new_word;
        }
    }
    else
    {
        string new_word;
        for(int i=0; i<word.size(); i++)
        {
            string new_word;
            new_word = tolower(word[i]);
            cout<<new_word;
        }
    }
    return 0;
}
