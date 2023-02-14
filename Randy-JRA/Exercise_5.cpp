//Challenge 5 is to calculate the sum of numbers from 1 to 10
#include<iostream>
using namespace std;
int main()
{
 
	int sum, i;
	cout<<" to see sum of numbers from 1 to 10 \n\n";
	for(i=1; i<=10; i++)
	{
		sum = i+sum;
	} 
	
	cout<<"final sum ="<<sum<<"\n";
}
