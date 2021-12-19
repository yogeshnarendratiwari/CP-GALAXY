#include <iostream>
using namespace std;
int main(){
    int arr[8] = {-2,-3,4,-1,-2,1,5,-3};
    int max_ending_here =0;
    int max_so_far  = INT16_MIN;
    int s = 0 , start = 0;
    int e=0;
    for(int i=0 ; i<8 ; i++){
        max_ending_here = max_ending_here + arr[i];
        if(max_ending_here<0){
              max_ending_here=0;
              s = i+1;
              
        }
        
        if(max_so_far<max_ending_here){
             max_so_far = max_ending_here;
             start = s;
             e = i;
        }
        
    }
    cout<<max_so_far<<endl;
    cout<<"The subset is from "<<start<<"-->"<<e<<endl;

}