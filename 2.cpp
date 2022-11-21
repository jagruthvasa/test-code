#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    char last=s2[s2.length()-1];
    int count=0;
    for(int i=0;i<s1.length();i++)
        if(s1[i] == last)
            ++count;
    
    cout << count;
    return 0;
}
