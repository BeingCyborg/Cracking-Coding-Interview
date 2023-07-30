#include <iostream>
using namespace std;
int sum(int n){
    return n * (n + 1) / 2; // time complexity O(1)
}
int main(){
    int n;
    cin >> n; // space complexity O(1)
    cout << sum(n);
    return 0;
}
