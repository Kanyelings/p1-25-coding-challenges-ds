//Challenge 17 is to Calculate the sum of digits of a positive integer number

#include <iostream>  
using namespace std;  
int main()  
{  
  int n,sum=0,m;    
	cout<<"Enter a number: ";    
	cin>>n;    
  while(n>0)    
 {    
	m=n%10;    
	sum=sum+m;    
	n=n/10;    
 }    
	cout<<"Sum of digits is= "<<sum<<endl;    
return 0;  
}  

