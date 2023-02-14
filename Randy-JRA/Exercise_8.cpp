//Challenge 8 is to Create a function that will convert from Celsius to Fahrenheit  as a Reminder: C = F – 32 / 1.8
 
#include<iostream>
using namespace std;
float CelsiusToFahrehneit(float);

float CelsiusToFahrehneit(float celsius)
{
    return ((celsius*1.8)+32);
}

int main()
{
    float celsius, fahrenheit;
    cout<<"Enter the Temperature in Celsius: ";
    cin>>celsius;
    fahrenheit = CelsiusToFahrehneit(celsius);
    cout<<endl<<celsius<<"\370C = "<<fahrenheit<<"\370F";
    cout<<endl;
    return 0;
}

