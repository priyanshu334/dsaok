#include<iostream>
using namespace std ;
void swapaalternate(int arr[], int n){
 
    for(int i = 0; i <n; i++){
        if(i+1<n){
            swap(arr[i], arr[i+1]);
        
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr [n];
    for(int i =0; i<n; ++i){
        cin>>arr[i];
    }
    swapaalternate(arr, n);
    for(int i =0; i<n; ++i){
        cout<<arr[i]<<" ";
    }
    return 0;
}

