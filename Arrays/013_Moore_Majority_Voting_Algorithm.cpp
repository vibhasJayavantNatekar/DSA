#include<iostream>
using namespace std;

int findMajority(int arr[] , int n ){

    int i , candidate = -1 , votes =0 ;

    for(i = 0 ; i < n ; i++){

        if(votes == 0){
            candidate = arr[i];
            votes = 1;
        }
        else{
            if(arr[i] == candidate){
               votes++ ;
            }else{
                votes--;

            }
        }
    }

    int count;
    for(i = 0 ; i < n ;i++){
        if(arr[i]==candidate){
            count++;
        }
        
    }
    if(count > n/2){
        return candidate;
    }
    return -1;

}


int main(){
     int arr[7] = {1,1,1,2,2,2,1};

     cout<<findMajority(arr , 7);
    return 0;
}