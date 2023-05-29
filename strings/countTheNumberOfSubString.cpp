#include<bits/stdc++.h>
using namespace std;

int kMost(string s, int k){
    unordered_map<char,int> m;
    int n=s.size();
    int left=0;
    int count=0;

    for(int i=0; i<n; i++){
        m[s[i]]++;
        while(m.size()>k){
            m[s[left]]--;
            if(m[s[left]]==0){
                m.erase(s[left]);
            }
            left++;
        }

        count+=i-left+1;
    }

    return count;
}

int substrCount (string s, int k){
        return kMost(s,k)-kMost(s,k-1);
}

// int substrCount (string s, int k) {
//    	    int res=0;
//     	int charCnt[26];
//     	int n=s.size();
    
//     	for(int i=0; i<n; i++){
//     	    int distCount=0;
    	    
//     	    memset(charCnt,0,sizeof(charCnt));
           
    	    
//     	    for(int j=i; j<n; j++){

//     	        if(charCnt[s[j]-'a']==0){
//     	            distCount++;
//     	        }
    	        
//     	        charCnt[s[j]-'a']++;
    	        
//     	        if(distCount==k){
//     	            res++;
//     	        }
    	        
//     	        if(distCount>k){
//     	            break;
//     	        }
//     	    }
//     	}
    	
//     	return res;
//     }
    

int main(){
    string s="hq";
    int k=1;
    
    int ans=substrCount(s,k);
    
    cout<<"ans="<<ans;
    
    return 0;
}