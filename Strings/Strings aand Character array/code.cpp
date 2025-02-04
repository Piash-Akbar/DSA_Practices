#include<iostream>
using namespace std;


int main(){
    char a[100];

    char str[] = "Hello World";
    int len = 0;


    // cout<<"Enter a string"<<endl;
    // cin.getline(a,100); //a=> character array, 100=> number of character, '$' => delimeter
    // cout<<a <<endl;

    // for(char ch : a){
    //     cout<<ch<<" ";
    // }

    for(int i=0; str[i]!='\0'; i++){
        len++;
    }
    cout<<len<<endl;



    cout<<endl;

    return 0;
}