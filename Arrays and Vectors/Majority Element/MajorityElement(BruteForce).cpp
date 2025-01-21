#include<iostream>
#include<vector>
using namespace std;

vector<int> MajorityElement(vector<int> nums){
    vector<int> ans;
    int n = nums.size();
    for(int val : nums){
        int freq = 0;
        for(int el: nums){
            if(el == val){
                freq++;
            }
            if(freq > n/2){
                ans.push_back(val);
                return ans;
            }
        }
    }

    return ans;
}

int main(){
    vector<int> nums = {5,7,5,4,5,5,9,5,5,12,0};

    vector<int> ans = MajorityElement(nums);
    cout << ans[0] <<endl;
    return 0;
}