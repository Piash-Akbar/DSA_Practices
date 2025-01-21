#include<iostream>
#include<vector>
using namespace std;

vector<int> PairSum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();

    int i=0, j=n-1;
    while(i<j){
        int pairSum= nums[i]+nums[j];
        if (pairSum > target){
            j--;
        }else if(pairSum < target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {2,7,8,4,5,0,9,1,2,12,4};
    int target = 16;

    vector<int> ans = PairSum(nums,target);
    cout <<ans[0] <<' '<< ans[1]<<endl;
    return 0;
}