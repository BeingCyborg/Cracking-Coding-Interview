#include <iostream>
using namespace std;
int multiply(int a, int b) // complexity O(b)
{
    if (b == 0)
    {
        return 0;
    }
    return a + multiply(a, b - 1); // space complexity O(b)
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << multiply(a, b);
}