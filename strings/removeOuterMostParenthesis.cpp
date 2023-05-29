#include<bits/stdc++.h>
using namespace std;

string valid(string s){
    stack<char> st;
    string temp="";

    for(int i=0; i<s.size(); i++){
        char ch=s[i];

        if(ch=='('){

            if(st.size()>0){
                temp.push_back(ch);
            }
            st.push(ch);
        }else{
            st.pop();
            if(st.size()>0){
                temp.push_back(ch);
            }
        }
    }

    return temp;
}

int main(){
    string s="(()())(())";

    string ans= valid(s);
    cout<<ans;
    return 0;
}