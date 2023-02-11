//Challenge 9 is to Create a function that will convert from Fahrenheit to Celsuis  as a Reminder: C = F – 32 / 1.8

 #include<iostream>
using namespace std;
float FahrehneitToCelsius(float);

float FahrehneitToCelsius(float fahrenheit)
{
    return ((fahrenheit - 32)/1.8);
}

int main()
{
    float celsius, fahrenheit;
    cout<<"Enter the Temperature in fahrenheit: ";
    cin>>fahrenheit;
    celsius = FahrehneitToCelsius(fahrenheit);
    cout<<endl<<fahrenheit<<"\370F  = "<<celsius<<"\370C";
    cout<<endl;
    return 0;
}
