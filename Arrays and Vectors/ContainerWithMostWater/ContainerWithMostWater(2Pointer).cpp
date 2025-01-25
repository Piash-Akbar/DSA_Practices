#include<iostream>
#include<vector>
using namespace std;

int MaxArea(vector<int> &heights){
    int maxWater = 0;
    int leftPointer = 0, rightPointer = heights.size()-1;

    while (leftPointer < rightPointer){
        int width = rightPointer - leftPointer;
        int height = min(heights[leftPointer], heights[rightPointer]);
        int currWater = width*height;
        maxWater = max(currWater,maxWater);

        heights[leftPointer] < heights [rightPointer] ? leftPointer++ : rightPointer--;
    }
    return maxWater;
    
}

int main(){
    vector<int> heights = {8,1,3,4,5,9,3,2,1,1,10};
    int maxwater = MaxArea(heights);
    cout<< maxwater << endl;
}