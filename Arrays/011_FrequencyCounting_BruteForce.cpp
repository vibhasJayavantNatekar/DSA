#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> countFreq(vector<int>& arr){
    int n = arr.size();
    
    // Mark all array elements as not visited
    vector<bool> visited(n , false);
    vector<vector<int>>ans;
    for (int i = 0; i < n; i++) {
        
        // Skip this element if already processed
        if (visited[i] == true)
            continue;

        // store the frequency
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
            
        }
        ans.push_back({arr[i] , count});
    }
    return ans;
}

int main(){
    vector <int> arr = {10, 20, 10, 5, 20};
    vector<vector<int>>ans =  countFreq(arr);
    sort(ans.begin(), ans.end()) ;
    for (auto x : ans){
        cout << x[0] << ' '<< x[1] <<'\n';
    }
    return 0 ;
}