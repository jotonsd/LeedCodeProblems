#include <iostream>
using namespace std;

bool isSubsequence(string s, string t) {
    int count = 0;
    if(s.length()> t.length())
        return false;
    for (auto i = 0; i < t.length(); i++)
    {
        if (s[count] == t[i])
        {
            count++;
        }
        else{
            continue;
        }
        
    }
    if (count == s.length())
    {        
        return true;
    }else{
        return false;
    }    
    
}
int main ()
{
    string s = "abc", t = "sahbgddc";
    cout<<isSubsequence(s,t);
    return 0;
}