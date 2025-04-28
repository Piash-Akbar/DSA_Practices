#include<iostream>
#include<string>
#include<vector>
using namespace std;

int compress(vector<char>& chars){
    int n = chars.size();
    int idx = 0;

    for(int i=0; i<n; i++){
        int count = 0;
        char ch = chars[i];

        while(i<n && chars[i]==ch){
            count++;
            i++;
        }
        chars[idx++] = ch;
        if(count==1){
            chars[idx++] = ch;
        }else{
            chars[ idx++]= ch;
            string str = to_string(count);
            for(char c : str){
                chars[idx++] = c;
            }
        }
        i--;
    }
    chars.resize(idx);
    return idx;
}

int main(){
    vector<char> chars = {'a','a','a','b','b','c','c','c'};
    int n = compress(chars);
    for(int i=0;i<n;i++){
        cout<<chars[i]<<" ";
    }
}