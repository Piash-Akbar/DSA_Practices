#include <iostream>
using namespace std;

int main(){
    int n =6;
    // int num = 1;
    for(int i=0; i<n; i++){
        // spaces
        for(int j=0; j<i; j++){
            cout<< ' ';
        }
        //Nums
        for (int k=0; k<n-i; k++){
            cout<< i+1;
        }
        // num++;
        cout<< endl;
    }
}