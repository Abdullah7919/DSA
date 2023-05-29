#include<iostream>
using namespace std;

void pattern7(int N)
{
    // This is the outer loop which will loop for the rows.
    for (int i = 0; i < N; i++)
    {
        // For printing the spaces before stars in each row
        for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
       
        // For printing the stars in each row
        for(int j=0;j< 2*i+1;j++){
            
            cout<<"*";
        }
        
        // For printing the spaces after the stars in each row
        //  for (int j =0; j<N-i-1; j++)
        // {
        //     cout <<" ";
        // }
        
        // As soon as the stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
    }
}

int main(){
    int n;
    cin>>n;
    // for(int i=1, k=0; i<=n; i++,k=0){
    //     for(int j=0; j<=n-i; j++){
    //         cout<<" ";
    //     }
    //     // This condition !2*i-1 run the loop while k is odd:
    //    while(k!=2*i-1){
    //     cout<<"*";
    //     k++;
    //    }cout<<endl;
    // }

    pattern7(n);
    return 0;
}