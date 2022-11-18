#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word1, word2;
    cin >> word1;
    int x = word1.length();
    for(int i = 0; i<x; i++)
    {
        if(word1[i]=='a'||word1[i]=='e'||word1[i]=='i'||word1[i]=='o'||word1[i]=='u'||word1[i]=='y'||word1[i]=='A'||word1[i]=='E'||word1[i]=='I'||word1[i]=='O'||word1[i]=='U'||word1[i]=='Y')
        {
            continue;
        }
        else
        {
            word2 += '.';
            word2 += towlower(word1[i]);
        }
    }
    cout<<word2<<endl;
}
