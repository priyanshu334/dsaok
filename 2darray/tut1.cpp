#include<iostream>
using namespace std ;
void print2DMatrix(int arr[3][4] ){
    for( int i=0; i<3; ++i){
        for(int j=0; j<4; ++j){
            cout<<arr[i][j]<<" ";
        }
    }
}

bool elementinMatrix(int arr[][4] ,int target , int row , int col){
    for(int i=0; i<row ; ++i){
        for(int j=0; j<col; ++j){
            if(arr[i][j]==target){
                return true;
            }
        }


    }
    return false;

}
void getSum(int arr[][4] ,int row , int col){
    for(int i=0; i<row ; ++i){
        int sum =0;
        for(int j=0; j<col ; ++j){
            sum += arr[i][j];
        }
               cout<<sum<<endl;


        }
     
    
    }



int main(){
    int arr[3][4];
    //geting row wise input
    // for(int i =0; i<3; i++){
    //     for(int j =0; j<4; j++){
    //         cin>>arr[i][j];
    //     }
    // }
    //geting column wise input
    for(int i =0; i<4; i++){
        for(int j =0; j<3; j++){
            cin>>arr[j][i];
        }
    }

    int target;
    cin>>target;
    cout<<elementinMatrix(arr,target,3,4)<<endl;
    print2DMatrix(arr);
    getSum(arr,3,4);



   
    return 0;
}