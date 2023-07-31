#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;

    int fact = n;
    for (int i = n - 1; i > 1; i--) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}
