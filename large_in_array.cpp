#include <iostream>
using namespace std;

int findLargest(int arr[], int n) {
    int maxElement = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement)
            maxElement = arr[i];
    }
    return maxElement;
}

int main() {
    int arr[] = {10, 24, 36, 89, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Largest Element: " << findLargest(arr, n) << endl;
    return 0;
}
