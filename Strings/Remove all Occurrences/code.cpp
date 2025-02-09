#include<iostream>
#include<string>
using namespace std;

string removeOccurances(string s, string part){
    while(s.length() != 0 && s.find(part) != string::npos){
        s.erase(s.find(part),part.length());
    }
    return s;    
}

int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    string part;
    cout<<"Enter a part to remove: ";
    getline(cin,part);
    cout<<removeOccurances(s,part)<<endl;
    return 0;
}