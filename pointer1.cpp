#include<iostream>
using namespace std;

int main(){
    // int i = 10;
    // int *ptr = &i;

    // cout<<i<<" "<<ptr<<endl;
    // string name;
    // cin>>name ;
    // string *ptr2 = &name ;
    
    // cout<<name<<" "<<ptr2<<endl;
    
    int i =9;
    int *ptr3 = &i;

    *ptr3 = *ptr3 *3 ;
    cout<<*ptr3<<endl;



    return 0;
}