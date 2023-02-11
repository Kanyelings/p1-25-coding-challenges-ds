#include <iostream>

using namespace std;

void selNegNum(int nums[50]);
void selNegNum(int nums[50]){
    int j = 0;
    int seld[50];
    for(int i=0; i<sizeof nums/sizeof nums[1]+4; i++){
        if(nums[i] >= 0){
            seld[j] = nums[i];
            j += 1;
        }
    }
    for(int k=0; k<j; k++){
        cout << seld[k]<< " ";
    }
}

int main()
{
    int nums[] = {8,3,2,-4,2,-5};
    selNegNum(nums);
    return 0;
}
