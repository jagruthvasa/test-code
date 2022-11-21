#include <bits/stdc++.h>
using namespace std;

int main()
{
    long input,result=0,rem=1;
    cin >> input;
    
    while(input>0){
        result += input % 3 * rem;
        input=input/3;
        rem=rem*10;
    }
    
    cout << result;
}