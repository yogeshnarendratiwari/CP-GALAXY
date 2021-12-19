// reverse the string

#include <iostream>
using namespace std;

class Reverse
{

public:
    void reverse_the_string_iterative(string &s)
    {
        int start = 0;
        int end = s.size() - 1;

        while (start <= end)
        {
            int temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }

        
    }
    void reverse_the_string_recursive(string &s, int start = 0, int end = 4)
    {
        if(start>end)
        return;
        int temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        reverse_the_string_recursive(s, start+1, end-1);
    }
    void display(string &s){
        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i] << " ";
        }
    }
};

int main()
{
    string s = "abcde";
    Reverse r;
    r.reverse_the_string_iterative(s);
    r.reverse_the_string_recursive(s);
    r.display(s);
}