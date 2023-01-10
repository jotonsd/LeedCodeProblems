#include<iostream>
using namespace std;

string isPalindrome(string S)
{    
    int len = S.length();
    for (int i = 0; i < len/2; i++)
    {
        if (S[i] != S[len-1-i])
        {
            return "No!";
        }
    }
    return "Yes!";
}

int main()
{
    string S = "abcdcba";
    cout<<isPalindrome(S);
    
    return 0;
}