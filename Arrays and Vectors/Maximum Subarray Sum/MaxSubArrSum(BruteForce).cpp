#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=6;
    int arr[6] = {1,3,2,5,4,-100};
    int maxSum = INT16_MIN;
    for(int st=0; st<n; st++){
        int currSum = 0;
        for(int end = st; end<n; end++){
            currSum += arr[end];
            maxSum = max(currSum,maxSum);
        }
    }
    cout<< "Maximum Subarray Sum: "<<maxSum <<endl;
    return 0;
}