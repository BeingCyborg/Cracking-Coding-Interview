#include <iostream>
using namespace std;

int* twoSum(int arr[], int target, int n) //Time Complexity: O(n^2)
{
    int* result = new int[2];
    for (int i = 0; i < n; i++)
    {
        int first = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            int second = arr[j];
            if (first + second == target)
            {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return result;
}

int main(){
    int n;
    cout << "number of elements"<<endl; //space complexity: O(n)
    cin >> n;
    int arr[n];
    cout << "enter the elements"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "enter the target"<<endl;
    cin >> target;
    int* result = twoSum(arr, target, n);
    cout << "indexs are: " << result[0] << " " << result[1] << endl;
}
