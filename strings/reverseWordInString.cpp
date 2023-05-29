#include<bits/stdc++.h>
using namespace std;
// My name is abdullah

string reverse(string temp){
    int s=0;
    int e=temp.size()-1;
    while(s<e){
        swap(temp[s++],temp[e--]);
    }

    return temp;
}

string reverseWord(string s){
    string temp="";
    string result="";

    for(int i=0; i<s.length(); i++){
        if(s[i]!=' '){
            temp.push_back(s[i]);
        }else{
            temp=reverse(temp);
            result+=temp + " ";
            temp="";
        }   
    }
     temp=reverse(temp);
        result+=temp+" ";
        temp="";

    return result;
}

int main(){
    string s="abdullah";
    string ans=reverseWord(s);
    cout<<ans;
    return 0;
}