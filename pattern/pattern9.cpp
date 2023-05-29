#include<iostream>
using namespace std;

void pattern9(int n){

    for(int i=0; i<n; i++){
        for(int k=0; k<n-i; k++){
            cout<<"  ";
        }

        for(int j=0; j<2*i+1; j++){
            cout<<"*"<<" ";
        }

        cout<<endl;
    }

    for(int i=n-1; i>=0; i--){
        for(int k=n-i; k>0; k--){
            cout<<"  ";
        }
        for(int j=2*i+1; j>0; j--){
            cout<<"*"<<" ";
        }

        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    // for(int i=1,k=0; i<=n; i++,k=0){
    //     for(int j=0; j<n-i; j++){
    //         cout<<" ";
    //     }
        
    //     //2*i-1 gives odd number:

    //     while(k!=2*i-1){
    //         cout<<"*";
    //         k++;
    //     }cout<<endl;
    // }
    // for(int i=n; i>=1; --i){
    //     for(int j=0; j<n-i; ++j){
    //         cout<<" ";
    //     }
    //     for(int j = i; j <= 2*i-1; ++j)
    //         cout << "*";

    //     for(int j = 0; j < i-1; ++j)
    //         cout << "*";

    //     cout << endl;
    // }

    pattern9(n);

    return 0;
}