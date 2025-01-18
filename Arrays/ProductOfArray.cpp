#include <iostream>
using namespace std;


int main(){
    //Initialize array
    int nums[] = {5,12,-90,7,20,-99};
    //get size
    int size = sizeof(nums)/sizeof(int);

    int prod = 1;

    for(int i=0; i<size; i++){
        prod *= nums[i];
    }
    cout << "Product of the array is: " << prod << endl;

    return 0;

}