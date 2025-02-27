#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n) {
    int sum = (n * (n + 1)) / 2;
    for (int i = 0; i < n - 1; i++)
        sum -= arr[i];
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 5};
    int n = 5;
    cout << "Missing number: " << findMissingNumber(arr, n) << endl;
    return 0;
}
