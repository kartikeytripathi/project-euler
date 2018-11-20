#include<iostream>
using namespace std;

int main()
{
	int num1 = 1.0, num2 = 2.0;
	int num3 , n;
	int sum = 0;
	cout<<"Enter n : ";
	cin>>n;
	cout<<num1<<"\t";
	cout<<num2<<"\t";
	sum  = num2;
	for(int  i = 2 ; i  < n ; i++)
		{
			num3  = num1 + num2;
			cout<<num3<<"\t";
			num1 = num2;
			num2 =  num3;
			if(num3 % 2 == 0)
			{
				sum  = sum + num3;
			}
		}
		
		cout<<" \nSum = " <<sum;
	return 0;	
}

	
