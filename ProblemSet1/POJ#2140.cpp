/*
@author 
Yicheng Gong
Fall 2015
*/
#include <iostream>
using namespace std;
int num_of_ways(int input)
{
	int ways=0;
	for (int i=1; i<=input; i++){
		int sum=0;
		for	(int k=i; k<=input; k++){
			sum+=k;
			if (sum==input)
			{
				ways++;
			}
			else if (sum>input)
			{
				break;
			}
		}
	}
	return ways;
}

int main() {
	int input;
	cin>>input;
	cout<<num_of_ways(input)<<endl;
	// your code goes here
	return 0;
}