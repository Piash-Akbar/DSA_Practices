#include <iostream>
using namespace std;

int main(){
    //Initialize array
    int nums[] = {5,12,-90,7,-20,-99};
    //get size
    int size = sizeof(nums)/sizeof(int);

    int largest = INT8_MIN;
    for(int i=0; i<size; i++){
        if(nums[i]>largest){
            largest = nums[i];
        }
    }
    cout <<"The Largest Value is:  " << largest << endl;


    return 0;
}