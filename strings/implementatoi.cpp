#include<bits/stdc++.h>
using namespace std;


int convert(string s){
    int num=0;
    int i=0;
    int flag=0;
    if(s[i]=='-'){
        flag=1;
        i=1;
    }

    for(;i<s.size(); i++){
        if(s[i]>='0' && s[i]<='9'){
            num=num*10+ s[i]-'0';

        }else{
            return -1;

        }
    }

    if(flag==1){
        return -num;
    }

    return num;
}

int main(){
    string s="--12";
    int ans=convert(s);
    cout<<ans;
    return 0;
}