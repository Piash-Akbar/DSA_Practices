// lt code prob 31  
#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

// lexicography 

void nextPermutation(vector<int> &A){
    // find the pivot 
    int pivot = -1, n=A.size();
    for(int i = n-1; i>=0;i--){
        if(A[i]<A[i+1]){
            pivot = i;
            break;
        }
    }
    if (pivot == -1){
        reverse(A.begin(),A.end()); //In Place Change
        return;
    }
    //2nd step: Next Larger Element
    for(int i=n-1;i>pivot;i--){
        if(A[i]>A[pivot]){
            swap(A[i],A[pivot]);
            break;
        }
    }
    //3rd step: reverse(piv+1 to n-1)
    int i = pivot+1, j= n-1;
    // reverse(A.begin()+pivot+1,A.end()); 
    while(i<=j){
        swap(A[i++],A[j--]);
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
    vector<int> Arr ={1,2,3};
    nextPermutation(Arr);
    printArray(Arr);
    return 0;
}