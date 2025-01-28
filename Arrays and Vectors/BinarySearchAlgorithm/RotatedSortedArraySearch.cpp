#include<iostream>
#include<vector>
using namespace std;

int rotSrtdBS(vector<int>& A, int tar){
    int st =0, end = A.size()-1;

    while(st<=end){
        int mid = st +(end-st)/2;
        if(A[mid] == tar){
            return mid;
        }        

        if (A[st]<=A[mid]){ //left sorted
            if(A[st] <= tar && tar<=A[mid]){
                end = end-1;
            }else{
                st = mid+1;
            }
        }else{ // Right part is sorted
            if(A[mid] <= tar && tar<= A[end]){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
        
    }
    return -1;

}


int main(){
    vector<int> arr2 = {5,9,12,-1,0,3};
    int tar2 = 0;
    cout<< rotSrtdBS(arr2,tar2)<<endl;

    return 0;
}

