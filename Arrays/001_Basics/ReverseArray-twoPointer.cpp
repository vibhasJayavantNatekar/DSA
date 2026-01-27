#include<iostream>
using namespace std;

//Reverse an array using 2 pointer approach

void Reverse(int arr[] , int size){
    int start = 0 , end = size-1;
    while(start < end){
        swap(arr[start],arr[end]);
        
        end--;
        start++;
    }
}

int main(){

    int arr[]={1,2,3,4,5,6,7,8};
    int size =8;
    Reverse(arr,size);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" \t";
    }

    

    return 0 ;
}