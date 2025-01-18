#include <iostream>
using namespace std;


int main(){
    //Initialize array
    int nums[] = {5,12,-90,7,-20,-99};
    //get size
    int size = sizeof(nums)/sizeof(int);

    int sum = 0;

    for(int i=0; i<size; i++){
        sum += nums[i];
    }
    cout << "Sum of the array is: " << sum << endl;

    return 0;

}