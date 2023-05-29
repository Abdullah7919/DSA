#include<iostream>
using namespace std;

// void reverse(int arr[],int l,int h){
//         if(l>=h){
//             return;
//         }

//         swap(arr[l],arr[h]);
//         reverse(arr,l+1,h-1);
// }
void reverse(int arr[],int i,int n){
    if(i>=n/2){return;}
    swap(arr[i],arr[n-i-1]);
    reverse(arr,i+1,n);

}
int main(){
   int size;
   cin>>size;
   int arr[size];

   for(int i=0; i<size; i++){cin>>arr[i];}
    
    reverse(arr,0,size);
    for(int i=0; i<size; i++){cout<<arr[i]<<" ";}
    
    return 0;
}