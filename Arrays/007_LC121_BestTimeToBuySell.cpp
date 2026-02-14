#include<iostream>

using namespace std;

int maxProfit(int prices[]  ,int n){

    long long minPrice = INT_MAX , maxProfit = 0;

    for(int i =0 ; i <n ; i++){
           
        if(prices[i] < minPrice){
            minPrice = prices[i];
        }
        int profit =  prices[i] - minPrice ;

        if(profit > maxProfit){
            maxProfit = profit;
        }
        

    }

    return maxProfit;

}

int main(){
   
    int arr[6] = {7,1,5,3,6,4};

    cout<<maxProfit(arr ,6);


    return 0;
}