#include<bits/stdc++.h>
using namespace std ;
//the range of int is 2*-31 se 2*31 tak
int getMax(int arr[], int n){
    int max = INT_MIN;
    for (int i =0; i<n; ++i){
        if(arr[i]>max){
            max = arr[i];
        }

    }
    return max;

}
int Getmin(int arr[], int n){
    int min = INT_MAX;
    for(int i =0; i<n; ++i){
        if(arr[i]<min){
            min = arr[i];
        }
    }

    return  min;
}
//get the maximum value of array using predefined function

int Getmax(int arr[], int n){
    int Max = INT_MIN;
    for(int i =0; i<n;++i){
        Max = max(Max,arr[i]);
    }
    return Max;
}

int main(){
    int n ;
    cin>>n;

    int arr[n];
    //taking input in an array
    for(int i =0; i<n;++i){
        cin>>arr[i];
    }
    int max = getMax(arr,n);
    cout<<" the maximum value of array is "<<" " <<max<<endl;

    int min = Getmin(arr,n);
    cout<<"the minimum value of array is "<< " "<< min<<endl; 

    return 0;
}