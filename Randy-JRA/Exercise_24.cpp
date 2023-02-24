//Challenge 24 is to Create a function that will merge
//two arrays and return the result as a new array
#include<iostream>
using namespace std;
int main()
{
    int arrOne[5], arrTwo[5], arrMerge[10];
	int sizeOne=5, sizeTwo=5, i, k;
    cout<<"Enter "<<sizeOne<<" Elements for First Array: ";
    for(i=0; i<sizeOne; i++)
    {
        cin>>arrOne[i];
        arrMerge[i] = arrOne[i];
    }
    k = i;
    
    cout<<"Enter "<<sizeTwo<<" Elements for Second Array: ";
    for(i=0; i<sizeTwo; i++)
    {
        cin>>arrTwo[i];
        arrMerge[k] = arrTwo[i];
        k++;
    }
    cout<<"\nThe New Array (Merged Array):\n";
    for(i=0; i<k; i++)
        cout<<arrMerge[i]<<" ";
    cout<<endl;
    return 0;
}
