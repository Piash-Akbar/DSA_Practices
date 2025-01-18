#include <iostream>
using namespace std;



int linearsearch(int arr[], int size, int trgt){
    for (int i=0; i<size; i++){
        if (arr[i] == trgt){
            return i;
        }
    }
    return -1;
        
}




int main(){
    //Initialize array
    int nums[] = {5,12,-90,7,-20,-99};
    //get size
    int size = sizeof(nums)/sizeof(int);
    //Target
    int target = -20;
    int index = linearsearch(nums, size, target);
    cout << "Index of the target is: "<< index<<endl;

    return 0;
}