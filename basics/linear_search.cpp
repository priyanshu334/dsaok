#include<iostream>
using namespace std;
int linear_search(int arr , int n, int k){
    for(int i =0; i<n; ++i){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}
void print(int arr[] , int n){
    for(int i =0 ; i<n; ++i){
        cout<<arr[i]<<" ";
    }
}

void swap(int s , int e){
    int m = s;
    s = e;
    e = m;
    
}

void reverse(int arr[], int n){
    int s =0;
    int e =n-1;
    while(s>e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    cout<<"the reverse array is "<<endl;
    print(arr,n);
}
 



int main(){
   int n ;
   cin>>n; 
   int arr[n];
   for(int i =0; i<n;++i){
    cin>>arr[i];
   }

    return 0;
}