//Challenge 7 is to Calculate the sum of odd numbers greater than 10 and less or equal than 30

#include<iostream>
using namespace std;
int main()
{
 
	int sum, i;
	
	for(i=11; i<=30; i+=2)
	{
		sum = i+sum;
	} 
	
	cout<<"The sum of odd numbers >10 and <=30 is ="<<sum<<"\n";
}
