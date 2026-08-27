#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 4;
    int m = 8;

    int profit[] = {1, 2, 5, 6};
    int weight[] = {2, 3, 4, 5};

    // Create DP table
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    // Fill DP table
    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= m; w++) {

            if (weight[i - 1] <= w) {
                dp[i][w] = max(
                    dp[i - 1][w],
                    profit[i - 1] + dp[i - 1][w - weight[i - 1]]
                );
            }
            else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    // Print DP Table
    cout << "DP Table:" << endl;

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= m; w++) {
            cout << dp[i][w] << " ";
        }
        cout << endl;
    }

    // Maximum profit
    cout << "\nMaximum Profit = " << dp[n][m] << endl;

    // Find selected items
    int w = m;
    vector<int> selected;

    for (int i = n; i >= 1; i--) {
        if (dp[i][w] != dp[i - 1][w]) {
            selected.push_back(i);
            w = w - weight[i - 1];
        }
    }

    // Reverse selected items
    reverse(selected.begin(), selected.end());

    cout << "Selected Items = ";

    for (int item : selected) {
        cout << item << " ";
    }

    cout << endl;

    return 0;
}
