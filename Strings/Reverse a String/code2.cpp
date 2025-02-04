#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;    


void reverseArray(vector<char>& s){
    int start = 0;  
    int end = s.size()-1;
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
}

int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    vector<char> v;
    for(int i=0;i<s.length();i++){
        v.push_back(s[i]);
    }

    //using my function
    // reverseArray(v);
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i];
    // }

    //using inbuilt function
    reverse(s.begin(),s.end());
    cout<<s;

    cout<<endl;
    return 0;
}