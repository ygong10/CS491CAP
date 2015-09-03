/*
@author
Yicheng Gong
Fall 2015
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int reverse_int(int num)
{
    int new_num = 0;
    while(num > 0)
    {
        new_num = new_num*10 + (num % 10);
        num = num/10;
    }
    return new_num;
}
	
int main(){   
	int loop;
	cin>>loop;
	for (int i=0; i<loop; i++)
	{
		int num1;
		int num2;
		cin>>num1>>num2;
		cout<<reverse_int(reverse_int(num1)+reverse_int(num2))<<endl;
	}
	return 0;
}