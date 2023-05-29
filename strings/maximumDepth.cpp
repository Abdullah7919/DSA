#include<bits/stdc++.h>
using namespace std;

int maximumDepth(string s){

    stack<char> st;
    int total=0;
    int maxi=0;
    for(int i=0; i<=s.size(); i++){
        char ch=s[i];
        if(ch=='('){
            st.push(ch);
            total++;
        }else if(ch==')'){
            st.pop();
            total--;
        }

        maxi=max(total,maxi);

    }
    return maxi;
}

int main(){
    string s="((5+2)(3+4)((6)))";
    int ans=maximumDepth(s);
    cout<<ans;
    return 0;
}