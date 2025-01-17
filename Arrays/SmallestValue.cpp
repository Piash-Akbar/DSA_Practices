#include <iostream>
using namespace std;

int main(){
    //Initialize array
    int nums[] = {5,12,-90,7,-20,-99};
    //get size
    int size = sizeof(nums)/sizeof(int);

    int smallest = INT8_MAX;
    for(int i=0; i<size; i++){
        if(nums[i]<smallest){
            smallest = nums[i];
        }
    }
    cout <<"The Smallest Value is:  " << smallest << endl;


    return 0;
}