
// Maximum Subarray

#include<iostream>
using namespace std;

int main(){

    int arr[6] = {4,2,-6,12,2,-8};
     int n =6;

    long long Maxi = INT_MIN;

     long long Prefix =  0 ;

    for(int i = 0 ; i < n ; i++ ){
        Prefix += arr[i];
        Maxi = max(Prefix , Maxi);
        if(Prefix < 0){
            Prefix = 0;
        }
    }
    
    cout<<Maxi;


    return 0;
}

// Moore’s Voting ✅

