#include<iostream>
using namespace std;

int main(){
    //my wrong code that does not provide correct output:

    // int n;
    // cin>>n;
    // for(int i=n, k=n; i>=1; i--){
    //     for(int j=1; j<=i; j++){
    //         cout<<" ";
    //     }
    //     while(!2*i-1){
    //         cout<<"*";
    //         k--;
    //     }cout<<endl;
    // }

    // Required more practice:
    
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    // for(int i = rows; i >= 1; --i)
    // {
    //     for(int space = 0; space < rows-i; ++space)
    //         cout << "  ";

    //     for(int j = i; j <= 2*i-1; ++j)
    //         cout << "* ";

    //     for(int j = 0; j < i-1; ++j)
    //         cout << "* ";

    //     cout << endl;
    // }

    for(int i=rows-1; i>=0; i--){
        for(int k=0; k<=rows-i; k++){
            cout<<"  ";
        }

        for(int j=2*i+1; j>0; j--){
            cout<<"*"<<" ";
        }

        cout<<endl;
    }
    return 0;
}