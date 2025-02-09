#include<iostream>
#include<string>
using namespace std;    

bool isPermutation(string s1, string s2){
    if(s1.length() != s2.length()){
        return false;
    }
    int count[256] = {0};
    for(int i=0;i<s1.length();i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i=0;i<256;i++){
        if(count[i] != 0){
            return false;
        }
    }
    return true;
}

int main(){
    string s1,s2;
    cout<<"Enter two strings: ";
    cin>>s1>>s2;
    cout<<isPermutation(s1,s2)<<endl;
    return 0;
}