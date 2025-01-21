#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=6;
    int arr[6] = {1,3,2,5,4,-100};
    int maxSum = INT16_MIN;
    int currSum = 0;
    for(int st=0; st<n; st++){
        currSum += arr[st];
        maxSum = max(currSum,maxSum);
        if (currSum < 0){
            currSum =0;
        }
    }
    cout<< "Maximum Subarray Sum: "<<maxSum <<endl;
    return 0;
}