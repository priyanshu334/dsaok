#include<iostream>
using namespace std ;

int fib(int n){
    int a =0;
    int b = 1;
    int next =0;
    for(int i =0; i<n; ++i){
        next = a+b;
        a = b;
        b = next ;
       

        
    }

return next;

}
bool PrimeNum(int n){
    bool isPrime = 1;
    for(int i=2; i<n; ++i){
        if(n%i==0){
            isPrime =0;
            break;
        }
    }
   return isPrime;
}

int main(){
   int n ;
   cin>>n;
   cout <<fib(n)<<endl;
   bool ans = PrimeNum(n);
   if(ans == true){
    cout<<"then the number is prime"<<endl;
      }
      else{
        cout<<"the number is non prime"<<endl;
      }
    return 0;
}