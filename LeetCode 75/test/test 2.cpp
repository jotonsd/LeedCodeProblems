#include<iostream>
#include<unordered_map>
#include <algorithm> 
using namespace std;

int isPalindrome(string s)
{    
    unordered_map<char, int> m;
    for (char c: s) m[c]++;
    int res = 0; bool center = false;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        res += it->second;

        if (it->second % 2 == 1)
        {
            res -= 1;
            center = true;
        }
        
    }
    
    return center? res + 1: res;

// another approch
    // int odds = 0;
    // for (char c = 'A'; c <= 'z'; c++)
    // {
    //     odds += count(s.begin(), s.end(), c) & 1;
    // }
    // return s.size() - odds +(odds>0);
    
}

int main()
{
    string S = "abcdcba";
    cout<<isPalindrome(S);
    
    return 0;
}