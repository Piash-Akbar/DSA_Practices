#include<iostream>
#include<vector>
using namespace std;

int singleValue(vector<int> nums){
    int ans =0;
    for(int val : nums){
        ans ^= val;
    }
    return ans;
}
int main(){
    vector<int> nums ={1,1,2,2,3,4,4};
    int res = singleValue(nums);
    cout<<"The Single Value Is: "<< res << endl;
}