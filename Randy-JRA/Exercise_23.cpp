//Challenge 23 is to reverse a string
#include <algorithm> 
#include<iostream>
#include<string>
using namespace std; 
int main() 
{ 
//use the inbuilt reverse function
    string str = "My Name Is Randy"; 
    reverse(str.begin(), str.end()); 
	cout<<"\n"<<str; 
    return 0;
}
