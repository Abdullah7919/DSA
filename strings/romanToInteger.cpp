#include<bits/stdc++.h>
using namespace std;

  int romanToDecimal(string &str) {
        unordered_map<char,int> m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        
        int ans=m[str[0]];
        for(int i=1; i<str.size(); i++){
            int x=m[str[i-1]];
            if(x<m[str[i]]){
                ans+=m[str[i]];
                ans-=2*x;
                continue;
            }else{
                ans+=m[str[i]];
            }
        }
        
        return ans;
    }

int main(){
    string s="XXIII";
    int ans=romanToDecimal(s);
    cout<<ans;
    return 0;
}