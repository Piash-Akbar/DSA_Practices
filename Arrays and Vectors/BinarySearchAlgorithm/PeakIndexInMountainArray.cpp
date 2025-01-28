#include<iostream>
#include<vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& A){
    int st =1, end= A.size()-2;

    while (st<end){
        int mid = st +(end-st)/2;
        if (A[mid-1]<A[mid] && A[mid]>A[mid+1]){
            return mid;
        } else if(A[mid-1] < A[mid]){ //Right
            st = mid +1;
        }else{
            end = mid -1;
        }
    }

    return -1;
    
}


int main(){
    vector<int> arr2 = {5,9,12,6,4,3};
    cout<< peakIndexInMountainArray(arr2)<<endl;

    return 0;
}


