// reverse the array

#include <iostream>
#include <vector>
using namespace std;

class Reverse
{

public:
    void reverse_the_array_iterative(vector<int>& v)
    {
        int start = 0;
        int end = v.size() - 1;

        while (start <= end)
        {
            int temp = v[start];
            v[start] = v[end];
            v[end] = temp;
            start++;
            end--;
        }

        
    }
    void reverse_the_array_recursive(vector<int> & v, int start = 0, int end = 4)
    {
        if(start>end)
        return;
        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;
        reverse_the_array_recursive(v, start+1, end-1);
    }
    void display(vector<int> & v){
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
    }
};

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    Reverse r;
    r.reverse_the_array_iterative(v);
    r.reverse_the_array_recursive(v);
    r.display(v);
}