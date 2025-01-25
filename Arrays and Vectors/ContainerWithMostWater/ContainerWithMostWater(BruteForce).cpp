#include<iostream>
#include<vector>
using namespace std;

int MaxArea(vector<int> &heights){
    int maxWater = 0;
    for(int i=0; i<heights.size(); i++){
        for (int j=i+1; j<heights.size();j++){
            int w = j-i;
            int hgt = min(heights[i],heights[j]);
            int currWater = w*hgt;

            maxWater = max(maxWater, currWater);
        }
    }
    return maxWater;
}

int main(){
    vector<int> heights = {8,1,3,4,5,9,3,2,1,1,10};
    int maxwater = MaxArea(heights);
    cout<< maxwater << endl;
}