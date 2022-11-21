#include <bits/stdc++.h>
using namespace std;

bool corr(int input){
    if(input== 0 || input== 1 || input== 2 || input== 5 || input== 8 || input== 6 || input== 9)
    return true;
    return false;
}

bool validate(int flag)
{
    int digit = flag % 10;
 
    while (flag != 0)
    {
        int pres = flag % 10;
        flag = flag / 10;
 
        if (!corr(pres))
        {
            return false;
        }
    }
    return true;
}

int fun(int input)
{
    int num=1;
    int temp = 1;
    while(num<10){
        if(corr(num)){
            if(temp == input)
                return num;
            num++;
            temp++;
        }
        else num++;
    }
    
    while(temp!= input){
        if(validate(num)){
            temp++;
            num++;
        }
        else num++;
    }
    
    return num;
}

int main()
{
	int input = 9;
	cout << fun(input);
	return 0;
}