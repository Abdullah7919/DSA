#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
        int N;
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++){
            cin>>arr[i];
        }

        vector<bool> visit(N,false);
        for(int i=0; i<N; i++){
            
            if(visit[i]==true){
                continue;
            }
            int count =1;
            
            for(int j=i+1; j<N; j++){
               
                if(arr[i]==arr[j]){
                    visit[j]=true;
                    count++;
                }
            }
            cout<<count<<" ";
            
         
        }


        
    // vector<int> v;

    // int n;
    // cin>>n;

    // for(int i=1; i<=n; i++){
    //     v.push_back(i);
    // }

    // v.pop_back();


//     for(auto i : v)
// {
//     cout<<i<<" "<<endl;
// }   

// cout<<v.size();

// auto it=v.begin();
// cout<<*it<<endl;

// auto it1=v.end();

// cout<<v.back();

// v.erase(v.begin()+1,v.end()-1);

//   for(auto i : v)
// {
//     cout<<i<<" "<<endl;
// }   

// v.insert(v.begin()+1,2,5);


//     for(auto i : v)
// {
//     cout<<i<<" "<<endl;
// }   

// v.clear();

// cout<<v.empty();

// int m;
// cin>>m;
// vector<int> v1;
// for(int i=m; i>=1; i--){
//     v1.push_back(i);
// }

// v.swap(v1);

//    for(auto i : v)
// {
//     cout<<i<<" "<<endl;
// }   

 return 0;
}