#include <iostream>

using namespace std;

int main()
{
    int rev[100];
    string word = "naM eldI";
    cout << sizeof word<< "\n";
    for(int i=0; i<sizeof word/4; i++){
        rev[i] = word[(sizeof word/4)-i-1];
    }
    for(int i=0; i<sizeof word/4; i++){
        word[i] = rev[i];
    }
    // Display
        cout << word;
    return 0;
}
