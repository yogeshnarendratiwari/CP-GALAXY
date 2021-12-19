#include <iostream>
using namespace std;
int main(){

 int arr[6] = {7,1,5,3,6,4};
 int min = INT16_MAX;
 int max = 0;
 for(int i=0 ; i<6 ; i++){
     if(min>arr[i])
     min = arr[i];

     if(arr[i]-min > max)
     max = arr[i]-min;
 }
 cout<<max<<endl;

}