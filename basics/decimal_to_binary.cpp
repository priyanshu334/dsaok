#include<bits/stdc++.h>
using namespace std ;
int decimal_to_binary(int n){
    int ans =0;
    int i =0;
     while(n!=0){
          int bit = n&1;
          ans = (bit*pow(10,i))+ans;
          n =n>>1;
          i++;
     }
     return ans ;

}
int binary_to_decimal(int n){
   int i =0; 
   int ans =0;

   while(n!=0){
    int digit = n%10;
    if(digit==1){
        ans = ans+pow(2,i);

    }
    n=n/10;
    i++;

   }
   return ans;
}

int main(){

    int n ;
    cin>>n;
    cout<<decimal_to_binary(n)<<endl;
   cout<<11%2<<endl;

    return 0;
}