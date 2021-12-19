#include <iostream>
using namespace std;
int main(){

 int arr[6] = {7,1,5,3,6,4};
 int max = 0;
 for(int i=0 ; i<6 ; i++){
     for(int j=i+1 ; j<6 ; j++){
         if(arr[j]-arr[i]>max)
         max=arr[j]-arr[i];
     }
 }
 cout<<max<<endl;

}