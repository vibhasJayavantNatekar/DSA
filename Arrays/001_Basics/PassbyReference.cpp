#include<iostream>
using namespace std;

void changearray(int arr[] , int size){
    cout<<"in function"<<endl;
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2*arr[i];
    }
    
}

int main(){
    int arr[]={2,4,6};

    changearray(arr,3);

    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0 ;
}