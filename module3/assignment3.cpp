#include <iostream>
#include <stack>
using namespace std;

bool isValidParanthese(string s) //Time Complexity: O(n)
{
    std::stack<char> stack; //Space Complexity: O(n)
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            stack.push(c);
        }
        else if (c == ')' && !stack.empty() && stack.top() == '(')
        {
            stack.pop();
        }
        else if (c == '}' && !stack.empty() && stack.top() == '{')
        {
            stack.pop();
        }
        else if (c == ']' && !stack.empty() && stack.top() == '[')
        {
            stack.pop();
        }
        else
        {
            return false;
        }
    }
    
    return stack.empty(); 
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    if (isValidParanthese(s))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}
