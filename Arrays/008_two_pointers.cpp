#include<iostream>

using namespace std;

bool isEqual(int arr[] , int n , int target){

    int sum = 0 ,left =0 , right = n -1;

    while (left < right)
    {
        sum = arr[left] + arr[right];

        if(sum==target){
            return true;
        }
        if(sum < target){
            left++;
        }else{
            right--;
        }

     
    }
   return false;
}
    

     



int main(){

    int arr[6] = {-8 , 1 , 4 , 6 , 10 , 45};

    cout<<isEqual(arr, 6 , 16);


    return 0;
}