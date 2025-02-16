#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string reverseWords(string s) {
    int n = s.length();
    reverse(s.begin(),s.end());
    int start = 0;
    for(int i=0;i<n;i++){
        if(s[i] == ' '){
            reverse(s.begin()+start,s.begin()+i);
            start = i+1;
        }
    }
    reverse(s.begin()+start,s.end());
    return s;
}

int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    cout<<reverseWords(s)<<endl;
    return 0;
}