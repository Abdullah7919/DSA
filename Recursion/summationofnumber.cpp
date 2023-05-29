#include<iostream>
using namespace std;

// Parameterised reecursion:

// void sumofn(int n, int sum){
//   if(n<1){
//     cout<<sum;
//     return;
//   }

//   sumofn(n-1,sum+n);
  
// }

// Functional recursion:

int sumof(int n){
    if(n==0){
        return 0;
    }

    return n+sumof(n-1);
}

int main(){
    int n;
    cin>>n;
    // int sum=0;
   cout<<sumof(n);
    return 0;
}