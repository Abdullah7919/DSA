#include<bits/stdc++.h>
using namespace std;

char toLower(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool valid(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return 1;
    }
    else{
        return 0;
    }
}

bool checkPalindrome(string s)
{
    int st=0;
    int e=s.size()-1;
    while(st<e){
        if(s[st]!=s[e]){
             return false;
      } else{
          st++;
          e--;
      }
      
    
    }
    return true;
}
int main(){
    string s;
    string temp="";
    getline(cin,s);

    for(int i=0; i<s.length(); i++){
        if(valid(s[i])){
            temp.push_back(s[i]);
        }
    }

    for(int i=0; i<temp.size(); i++){
        temp[i]=toLower(temp[i]);
    }


    if(checkPalindrome(temp)){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
    // N2 i&nJA?a& jnI2n
}