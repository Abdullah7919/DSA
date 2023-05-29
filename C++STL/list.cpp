#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){

        l.emplace_back(i);
    }

    for(auto x:l){
        cout<<x<<" "<<endl;
    }

    // cout<<l.size();

    // l.emplace_front(5);

    
    // for(auto x:l){
    //     cout<<x<<" "<<endl;
    // }

    // l.pop_back();
    // l.pop_front();

    // for(auto x:l){
    //     cout<<x<<" "<<endl;
    // }

    // l.clear();

    // auto it =l.begin();

    // cout<<*it<<endl;

    // auto it=l.end();

    // it-- point to the last element of the list:
    // it--;

    // cout<<*it;

    // l.insert(l.begin(),2,5);

    // for(auto x:l){
    //     cout<<x<<" "<<endl;
    // }

    // l.erase(l.begin(),l.end());

    // here we can use swap function also:

    // list<int> ls;

    // int m;
    // cin>>m;
    // for(int i=m; i>=1; i--){
    //     ls.emplace_back(i);
    // }

    // for(auto x:ls){
    //     cout<<x<<" "<<endl;
    // }

    // l.swap(ls);
    // for(auto x:ls){
    //     cout<<x<<" "<<endl;
    // }

    return 0;
}