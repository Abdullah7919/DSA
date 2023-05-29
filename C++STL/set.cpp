#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> st;
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        st.insert(i);
    }

    for(auto x: st){
        cout<<x<<endl;
    }

    // auto it=st.find(2);
    // cout<<*it;

    // cout<<st.count(5);

    // st.erase(4);

    return 0;
}