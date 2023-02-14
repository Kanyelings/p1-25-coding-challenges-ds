//challenge 3 is to print the multiplication table with 7

#include<iostream>
using namespace std;
int main()
{
 
	int num, i, answer;
	num=7;
	cout<<"Multiplication Table of "<<num<<" is \n\n";
	for(i=1; i<=10; i++)
	{
		answer=num*i;
		cout<<num<<" * "<<i<<" = "<<answer<<"\n";
	}
 
}
