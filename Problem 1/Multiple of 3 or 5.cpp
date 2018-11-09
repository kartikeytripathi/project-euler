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

