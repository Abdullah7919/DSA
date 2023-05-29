#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        dq.emplace_back(i);
    }

    for(auto x: dq){
        cout<<x<<" "<<endl;
    }

    // cout<<dq.size();

    // dq.insert(dq.begin()+1,2,5);

    // dq.pop_back();
    // dq.pop_front();

    // dq.clear();

    // auto it=dq.begin()+1;

    // cout<<*it<<endl;

    // auto it1=dq.end()-1;

    // cout<<*it1;

    // cout<<dq.empty();

    // swap function is also used here:

    // dq.erase(dq.begin()+1,dq.begin()+3);

    // cout<<dq.back()<<endl;

    // cout<<dq.front()<<endl;

    //   for(auto x: dq){
    //     cout<<x<<" "<<endl;
    // }

    return 0;
}