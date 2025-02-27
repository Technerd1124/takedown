#include <iostream>
using namespace std;

int fibRecursive(int n) {
    if (n <= 1) return n;
    return fibRecursive(n - 1) + fibRecursive(n - 2);
}

int fibDP(int n) {
    int dp[n + 1];
    dp[0] = 0, dp[1] = 1;
    for (int i = 2; i <= n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];
    return dp[n];
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Fibonacci (Recursion): " << fibRecursive(n) << endl;
    cout << "Fibonacci (DP): " << fibDP(n) << endl;
    return 0;
}
