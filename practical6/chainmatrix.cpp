#include <iostream>
#include <climits>
#include <cstdlib>
#include <ctime>
using namespace std;

int matrixChainMultiplication(int p[], int n) {
    int dp[100][100];

    // Cost of multiplying one matrix is 0
    for (int i = 1; i < n; i++)
        dp[i][i] = 0;

    // length = number of matrices in the chain
    for (int length = 2; length < n; length++) {
        for (int i = 1; i < n - length + 1; i++) {
            int j = i + length - 1;
            dp[i][j] = INT_MAX;

            // Try every possible split
            for (int k = i; k < j; k++) {
                int cost = dp[i][k]
                         + dp[k + 1][j]
                         + p[i - 1] * p[k] * p[j];

                if (cost < dp[i][j])
                    dp[i][j] = cost;
            }
        }
    }

    return dp[1][n - 1];
}

int main() {
    srand(time(0));

    // Random number of matrices between 3 and 7
    int n = 3 + rand() % 5;

    int p[100];

    // Generate random dimensions between 10 and 50
    for (int i = 0; i <= n; i++) {
        p[i] = 10 + rand() % 41;
    }

    cout << "Number of matrices: " << n << endl;

    cout << "\nRandom Matrix Dimensions:\n";

    for (int i = 1; i <= n; i++) {
        cout << "A" << i << " = "
             << p[i - 1] << " x " << p[i] << endl;
    }

    int result = matrixChainMultiplication(p, n + 1);

    cout << "\nMinimum number of scalar multiplications = "
         << result << endl;

    return 0;
}
