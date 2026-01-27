#include<iostream>
#include<vector>

using namespace std;



int main(){
     
    int arr[6] = {6,4,5,-3,2,8};
      
    vector<int>Suffix(6);
    Suffix[5] = arr[5];

    for(int i =4;i >= 0;i--){

        Suffix[i] = Suffix[i+1] + arr[i];

    }
    
    //Print the suffix

    for(int x :Suffix){
        cout<< x <<"\t";
    }

    return 0;
}