#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <climits>
using namespace std;

int main() {
    srand(time(0));

    // Generate random number of coin types (3 to 6)
    int n = 3 + rand() % 4;

    vector<int> coins(n);

    // Generate random coin denominations
    coins[0] = 1;  // 1 is always included

    for (int i = 1; i < n; i++) {
        coins[i] = 2 + rand() % 20;
    }

    // Generate random amount (20 to 100)
    int amount = 20 + rand() % 81;

    cout << "Coin denominations: ";
    for (int coin : coins)
        cout << coin << " ";

    cout << "\nAmount = " << amount << endl;

    // dp[i] = minimum number of coins required to make amount i
    vector<int> dp(amount + 1, INT_MAX);

    // 0 coins are needed to make amount 0
    dp[0] = 0;

    // Dynamic Programming
    for (int i = 1; i <= amount; i++) {
        for (int coin : coins) {
            if (coin <= i && dp[i - coin] != INT_MAX) {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }

    // Display result
    if (dp[amount] == INT_MAX) {
        cout << "Change cannot be made for " << amount << endl;
    } else {
        cout << "Minimum number of coins required = "
             << dp[amount] << endl;
    }

    return 0;
}
