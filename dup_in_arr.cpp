#include <iostream>
#include <unordered_map>
using namespace std;

void findDuplicates(int arr[], int n) {
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
        freq[arr[i]]++;

    cout << "Duplicate elements: ";
    for (auto it : freq) {
        if (it.second > 1)
            cout << it.first << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 6, 4, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    findDuplicates(arr, n);
    return 0;
}

