#include <iostream>
using namespace std;
int main(){
    int arr[8] = {-2,-3,4,-1,-2,1,5,-3};
    int max_ending_here =0;
    int max_so_far  = INT16_MIN;
    for(int i=0 ; i<8 ; i++){
        max_ending_here = max(arr[i],max_ending_here+arr[i]);
        max_so_far = max(max_so_far,max_ending_here);
    }
    cout<<max_so_far<<endl;

}