#include <iostream>
using namespace std;


//Linear Search function
int linearsearch(int arr[], int size, int trgt){
    for (int i=0; i<size; i++){
        if (arr[i] == trgt){
            return i;
        }
    }
    return -1;
        
}



int swapmaxmin(int arr[],int size){

    int smallest = INT16_MAX;
    int largest = INT16_MIN;


    //find smallest
    for(int i=0; i<size; i++){
        smallest = min(arr[i], smallest);
    }
    // find largest 
    for(int i=0; i<size; i++){
        largest = max(arr[i], largest);
    }

    //Search for indexes
    int largeIndex = linearsearch(arr,size,largest);
    int smallIndex = linearsearch(arr,size,smallest);

    swap(arr[largeIndex],arr[smallIndex]);

    return 0;


}


int main(){
    //Initialize array
    int nums[] = {5,120,-90,7,20,-99};
    int size = sizeof(nums)/sizeof(int);
    //
    swapmaxmin(nums, size);
    for(int i=0; i<size; i++){
        cout<<nums[i]<<" ";
    }
    cout << endl;

    return 0;

}