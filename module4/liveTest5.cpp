#include <iostream>
using namespace std;
bool is_Palindrome(string s, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    if (s[start] != s[end])
    {
        return false;
    }
    return is_Palindrome(s, start + 1, end - 1);
}

int main()
{
    string s;
    cin >> s;
    if (is_Palindrome(s, 0, s.length() - 1))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}