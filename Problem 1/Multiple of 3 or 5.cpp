/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

*/
#include<iostream>
using namespace std;
int main()
{
	int i = 1, range, sum=0;
	cin>>range;
	while(i<range)
	{
		if(i%3==0 || i %5 ==0)
		{
			sum = sum + i;
		}
		i++;
	}
	
	cout<<sum;
	return 0;
}


// Answer : - 233168

