#include<iostream>
using namespace std;

void pattern10(int n){
    for(int i=1; i<=2*n-1; i++){
        int star=i;
        if(i>n){
            star=2*n-i;
        }

        for(int j=1; j<=star; j++){
            cout<<"*";
        }

        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<=i; j++){
    //         cout<<"*";
    //     }cout<<endl;
    // }
    // for(int i=n-1; i>0; i--){
    //         for(int j=i; j>0; j--){
    //             cout<<"*";
    //         }cout<<endl;
    //     }

    pattern10(n);
    return 0;
}