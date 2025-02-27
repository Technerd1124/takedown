#include <iostream>
#include <set>
using namespace std;

void findUnion(int arr1[], int n1, int arr2[], int n2) {
    set<int> unionSet;
    for (int i = 0; i < n1; i++) unionSet.insert(arr1[i]);
    for (int i = 0; i < n2; i++) unionSet.insert(arr2[i]);
    cout << "Union: ";
    for (int num : unionSet) cout << num << " ";
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    findUnion(arr1, 5, arr2, 5);
    return 0;
}
