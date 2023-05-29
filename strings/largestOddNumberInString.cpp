#include<bits/stdc++.h>
using namespace std;

string largestOdd(string s){
    for(int i=s.length(); i>=0; i--){
        if(s[i]%2!=0){
            s.erase(i+1,s.length());
            return s;
        }
    }

    return "";
}

// string largestOdd(string s){
//     int ind=-1;
//     string ans="";
//     for(int i=s.length(); i>=0; i--){
//         char c=s[i];
//         if(c%2!=0){
//             ind=i;
//             break;
//         }
//     }
//     if(ind==-1){
//         return ans;
//     }
//     for(int i=0; i<=ind; i++){
//         ans.push_back(s[i]);
//     }

//     return ans;
// }

int main(){
    string s="41839";
    string ans=largestOdd(s);
    cout<<ans;
    return 0;
}