#include <iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0;
    int end = size-1;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    //Initialize array
    int nums[] = {5,12,-90,7,-20,-99};
    //get size
    int size = sizeof(nums)/sizeof(int);

    reverseArray(nums, size);

    for(int i=0; i<size; i++){
        cout<<nums[i]<<" ";
    }
    cout << endl;
}