#include<iostream>
#include <vector>

using namespace std;

int main(){
    int arr[6] = {6,4,5,-3,2,8};



   vector<int>Prefix(6);
   Prefix[0]=arr[0];

   for (int  i = 1; i <= 6; i++)
   {
    Prefix[i] = Prefix[i-1] + arr[i];
    
   }

   // Print items of vprefix
    for (int x : Prefix) {
        cout << x << " ";
    }

    return 0;
}
