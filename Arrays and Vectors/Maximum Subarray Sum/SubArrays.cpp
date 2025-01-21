#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=5;
    int arr[5] = {1,3,2,5,4};
    for(int st=0; st<n; st++){
        for(int end = st; end<n; end++){
            for(int i=st; i<=end; i++){
                cout<< arr[i];
            }
            cout<< ' ';
        }
        cout<< endl;
    }
}