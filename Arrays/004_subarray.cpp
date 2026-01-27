#include<iostream>

using namespace std;

int main(){

    int arr[4]={4,3,7,2};

    cout<<"Size 1 Subarray.";

    for(int i = 0;i< 4;i++){
        
            cout<<arr[i] <<"\t";
        
    }

    cout<<"Size 2 Subarray."<<"\t";

    for(int i =0 ;i <= 4 - 2;i++){

        cout<<arr[i];
        cout<<arr[i+1];
        cout<<"\t";
         
    }

    cout<<"Size 3 Subarray."<<"\t";

    for(int i = 0 ;i <= 4-3;i++){

        cout<<arr[i];
        cout<<arr[i+1];
        cout<<arr[i+2];
        cout<<"\t";
    }
    
    cout<<"Size 4 Subarray."<<"\t";

    for(int i = 0 ;i <1;i++){
        cout<<arr[i];
        cout<<arr[i+1];
        cout<<arr[i+2];
        cout<<arr[i+3];
        cout<<"\t"
    }

    return 0;
}
