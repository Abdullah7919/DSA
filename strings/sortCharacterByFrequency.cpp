#include<bits/stdc++.h>
using namespace std;

// bool comp(pair<char,int>p1,pair<char,int>p2){
//     if(p1.second>p2.second){
//         return true;
//     }else{
//         return false;
//     }
// }

string sortCharacter(string s){
       string ans="";
        vector<pair<int,char>> v('z'+1,{0,0});
        for(auto c:s){
            v[c]={v[c].first+1,c};
        }

        sort(v.begin(),v.end());
        
        // for(auto ch:v){
        //     for(int i=0; i<ch.first; i++){
        //         ans.push_back(ch.second);
        //     }
        // }

        // it take less time so we use this
        for(auto it:v){
            ans=string(it.first,it.second)+ans;
        }

        return ans;
    }



int main(){
    string s="tree";
    string ans=sortCharacter(s);
    cout<<ans<<endl;
    return 0;
}