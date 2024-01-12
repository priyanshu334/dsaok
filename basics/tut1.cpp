#include<iostream>
using namespace std ;
void print(int arr[], int size){
    for(int i =0; i<size; ++i){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[10] = {1,2,3,4,5,6,6,7};
    int size  = 10;
    print(arr,size);
    return 0;
}