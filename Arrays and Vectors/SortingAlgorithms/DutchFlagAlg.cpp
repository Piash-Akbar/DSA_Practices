// 75 sort color lt-coode

#include<iostream>
#include<vector>
using namespace std;

void DFL(vector<int> &arr){
    int n = arr.size();
    int low = 0, mid = 0, high = n-1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            mid++; low++;
        }else if(arr[mid] == 1){
            mid++;
        }else{
            swap(arr[high],arr[mid]);
            high--;
        }
    }
}


void printArray(vector<int> &arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {2,0,2,1,1,0,2,0,1,0,1,2};
    DFL(arr);
    printArray(arr);
    return 0;
}