#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int MajorityElement(vector<int> nums){
    int n = nums.size();

    int freq = 0, ans=0;
    for (int i=0;i<n; i++){
        if (freq==0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {5,7,5,4,5,5,9,5,5,12,0};

    int ans = MajorityElement(nums);
    cout << ans <<endl;
    return 0;
}