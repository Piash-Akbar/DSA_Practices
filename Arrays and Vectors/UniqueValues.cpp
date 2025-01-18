#include <iostream>
using namespace std;


int uniquevalues(int arr[],int size){
    for (int i = 0; i < size; i++){
        for(int j =0; j<size; j++){
            if(arr[i] == arr[j] && i != j){
                cout<< arr[i]<< endl;
            }
        }
    }
    return 0;
}


int main(){
    //Initialize array
    int nums[] = {5,7,-9,7,20,-9};
    //
    int size = sizeof(nums)/sizeof(int);
    uniquevalues(nums,size);

    return 0;

}