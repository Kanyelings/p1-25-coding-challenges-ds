#include <iostream>

using namespace std;

int main()
{
    for(int j=0; j<10; j++){
        cout << "Table for "<< j+1<< "\n";
        for(int i=0; i<10; i++){
            cout << j+1<< " * "<< i<< " = "<< (j+1)*i<< "\n";
        }
        cout << "\n";
    }
    return 0;
}
