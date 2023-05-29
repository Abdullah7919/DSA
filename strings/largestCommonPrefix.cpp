#include<bits/stdc++.h>
using namespace std;

string largestPrefix(string arr[],int n){
   
    int flag=0;
    int count =0;
    int min=10000;
    string s="";
    for(int i=0; i<n; i++){
        if(arr[i].length()<min){
            min=arr[i].length();
            s=arr[i];
        }
    }

    for(int i=0; i<min; i++){
        for(int j=0; j<n; j++){
            if(arr[j][i]!=s[i]){
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
        count++;
    }
    if(count==0){
        return "-1";
    }
    s.erase(s.begin()+count,s.end());
    return s;
}

int main(){
    string arr[]={"geeksforgeeks", "geeks", "geek", "geezer"};
    string ans=largestPrefix(arr,4);
    cout<<ans;
    return 0;
}