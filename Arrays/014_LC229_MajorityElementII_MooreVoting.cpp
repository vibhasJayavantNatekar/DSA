#include<iostream>
#include <vector>

using namespace std;

vector<int> majorityElement(int nums[] , int n ){
   
    int  cand1  =0 , cand2 =0 , count1 = 0 , count2 = 0;

    for(int i = 0 ; i < n ; i++){
        if(nums[i] == cand1){
            count1++;
        }else if(nums[i] == cand2){
            count2++;
        }else if (count1 == 0)
        {
            cand1 = nums[i];
            count1 = 1;
        }else if (count2 == 0)
        {
            cand2 = nums[i];
            count2 = 1;
        }else{
            count1--;
            count2--;
        }
    }

    count1 = 0;
    count2  = 0;

    vector<int>ans;

    for(int i = 0;i < n;i++){
        if(nums[i] == cand1){
            count1++;
        }else if(nums[i] == cand2)
        {
            count2++;
        }
    }

    if(count1 > n/3){
        ans.push_back(cand1);
    }
    if(count2 > n/3){
        ans.push_back(cand2);
    }
    
    return ans;

}


int main(){

    int nums[] = {1,2,2,1,5,2};
    int n = 6;

    vector<int>ans;

   ans =  majorityElement(nums ,n);

     for(int x : ans){
        cout<<x;
     }
    return 0;
}