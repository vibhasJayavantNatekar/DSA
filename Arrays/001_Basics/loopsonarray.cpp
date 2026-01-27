#include<iostream>

using namespace std;

int main(){

       int point[5] ;
       //Calculate size of array
       int size = sizeof(point) /sizeof(int);
//lopp - o to size -1 
          for(int i=0;i<size;i++){
            cin>>point[i];


       }


       //loop - 0 to size -1
       for(int i=0;i<size;i++){

        cout<<point[i]<<endl;

       }



    return 0 ;
}