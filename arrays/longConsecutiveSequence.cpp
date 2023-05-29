#include<bits/stdc++.h>
using namespace std;

int longestConsecutiveSequence(int arr[],int n){
        set<int> s;
        int longestStreak=0;
        for(int i=0; i<n; i++){
            s.insert(arr[i]);
        } 

        for(int i=0; i<n; i++){
            if(!s.count(arr[i]-1)){
                int current_streak=1;
                int current_num=arr[i];
                while(s.count(current_num+1)){
                    current_streak++;
                    current_num++;
                }
                 longestStreak=max(longestStreak,current_streak);
            }
        }

        return longestStreak;
    }

int main(){

    int arr[]={100,200,1,3,2,4};
    int n=6;
    int result=longestConsecutiveSequence(arr,n);
    cout<<result;
    
    return 0;
}