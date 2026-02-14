//Divide Array into 2 subarray with equal sum

#include<iostream>
#include<vector>

using namespace std;

bool divide(vector<int>arr)
{
    int prefix =0 , totalSum =0;

    //Total sum

    for(int i =0 ; i < arr.size(); i++){
        totalSum += arr[i];


        
    }
    for(int i =0 ;i< arr.size() ; i++){
        prefix += arr[i];

        // int ans  = totalSum - prefix;
        // if(ans==prefix){
        //     return 1;
        // }

        if(totalSum==2*prefix){
            return 1;
        }
        
    }
    return 0;

}

int main(){

    int n;

    cout<<"Enter a Size of array:";
    cin>>n;

    vector<int>v(n);

    cout<<"Enter the elements of array :";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    cout<<divide(v);




    return 0;
}