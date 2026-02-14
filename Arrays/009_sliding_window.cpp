#include<iostream>

using namespace std;

int maxSum(int arr[] , int n , int k){
    int window_sum  , max_sum = 0;

    if(n < k){
        cout<<"Invalid";
        return -1;
    }
    for (int i = 0; i < k; i++){
        max_sum+= arr[i];


    }
  window_sum = max_sum;
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        max_sum = max(max_sum, window_sum);
    }

    return max_sum;
}

int main(){
      int arr[5] = {5,2,-1,0,3};
        
      cout<<maxSum(arr , 5 , 3);



    return 0;
}