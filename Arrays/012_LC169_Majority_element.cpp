#include<iostream>
#include <vector>

using namespace std;

int majorityEle(int arr[] , int n){
   
    int max_count =0 , ans=0;
    vector<bool>visited(n , false);

    for(int i =0 ; i< n ; i++){
          
        if(visited[i]){
            continue;
        }
        visited[i]= true;

        int curr_count = 1 ;

        for(int j = i +1;j < n ;j++){
            if(arr[i] == arr[j]){
                visited[j]=true;
                curr_count++;
            }
        }
        if(curr_count > max_count){
            max_count = curr_count;
            ans = arr[i];
        }




    }

    return ans;

}


int main(){

    int arr[3]={3,2,3};

    int n =3;
    cout<<majorityEle(arr , n);



    return 0 ;
}