#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> s;

    for(int i=0; i<10; i++){
        s.insert(i);
    }
//    s.clear();
    for(auto it:s){
        cout<<it<<endl;
    }
//    cout<<s.size()<<endl;
      if(s.find(3)==s.end()){
        cout<<"not found"<<endl;
      }else{
        cout<<"element is found"<<endl;
      }

      auto it =s.begin();
      auto it1 =s.find(0);
      s.erase(it,it1);
      for(auto it:s){
        cout<<it<<endl;
    }
   

   
    return 0;
}