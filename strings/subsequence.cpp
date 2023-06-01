#include<bits/stdc++.h>
using namespace std;

// power set

vector<string> subSequence(string s){

    vector<string> ans;
    int n=s.size();

    for(int num=0; num<(1<<n); num++){
        string sub="";

        for(int i=0; i<n; i++){
            if(num & (1<<i)){
                sub+=s[i];
            }
        }

        ans.push_back(sub);
    }

    return ans;
}

void print(vector<string> s){

    for(auto it: s){
        cout<<it<<" ";
    }
}

int main(){
    string s="abc";
    vector<string> ans=subSequence(s);
    print(ans);
    return 0;
}