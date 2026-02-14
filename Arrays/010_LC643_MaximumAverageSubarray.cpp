#include<iostream>

using namespace std;

double maxAvgSubArray(int arr[] , int n ,  int k){

    double max_sum = 0 , max_avg ;

    for(int i = 0 ; i < k  ; i++){
        max_sum += arr[i];
    }
    max_avg = max_sum /k;

    for(int i = k ; i < n ; i++){
        max_sum += arr[i] - arr[i-k];
        max_avg = max(max_avg , max_sum/k);
    }

    return max_avg;

}


int main(){

    int arr[6]= {1,12,-5,-6,50,3};
    int n = 6;
    int k =4;

    cout<<maxAvgSubArray(arr , n , k);


    return 0;
}