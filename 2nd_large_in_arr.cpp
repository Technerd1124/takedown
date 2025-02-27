#include <iostream>
#include <climits>
using namespace std;

int findSecondLargest(int arr[], int n) {
    int largest = INT_MIN, secondLargest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main() {
    int arr[] = {10, 20, 4, 45, 99, 99};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Second Largest Element: " << findSecondLargest(arr, n) << endl;
    return 0;
}
