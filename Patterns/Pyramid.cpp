#include <iostream>
using namespace std;

int main(){
    int n =6;
    // int num = 1;
    for(int i=0; i<n; i++){
        // spaces
        for(int j=0; j<n-i-1; j++){
            cout<< '.'<< ' ';
        }
        //Num 1
        for (int k=0; k<i+1; k++){
            cout<< k+1 << ' ';
        }
        // num2
        for (int l= i; l>0; l--){
            cout<< l << ' ';
        }
        cout<< endl;
    }
}