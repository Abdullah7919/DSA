#include<bits/stdc++.h>
using namespace std;

void stockBuySell(int price[], int n) {

    int buy = 0;

    int sell = 0;

    int x = 1;

    for(int i =0; i<n; i++)

    {

        if(price[i] < price[buy]) { buy = i; }

        if(price[i+1] < price[i] && buy < i)

        {

            cout << "(" << buy << " " << i << ")" << " ";

            buy = i+1;

            x = 0;

        }

        if(i == n-1 && price[i] > price[buy] && buy < i) 

        {

            cout  << "(" << buy << " " << i << ")" ;

            x = 0;

        }

    }

    if(x) cout << "No Profit";

    cout << endl;

}

int main(){
    int arr[]={ 100, 180, 260, 310, 40, 535, 695 };
    int n=7;
    stockBuySell(arr,n);
    return 0;
}