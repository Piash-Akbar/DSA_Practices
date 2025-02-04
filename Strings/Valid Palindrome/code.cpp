#include<iostream>
#include<string>
using namespace std;


bool isPalindrome(string s){
    int st = 0, end = s.length()-1;
    
    while (st < end){
        if(s[st] != s[end])
            return false;
        st++;
        end--;
    }
    return true;
}
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    cout<<isPalindrome(s)<<endl;
    return 0;
}

