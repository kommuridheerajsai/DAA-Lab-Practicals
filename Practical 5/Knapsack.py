n = 4
m = 8
profit = [1, 2, 5, 6]
weight = [2, 3, 4, 5]
dp = [[0 for _ in range(m + 1)] for _ in range(n + 1)]
for i in range(1, n + 1):
    for w in range(1, m + 1):
        if weight[i - 1] <= w:

            dp[i][w] = max(
                dp[i - 1][w],
                profit[i - 1] + dp[i - 1][w - weight[i - 1]]
            )

        else:
            dp[i][w] = dp[i - 1][w]

print("DP Table:")

for row in dp:
    print(row)

print("\nMaximum Profit =", dp[n][m])

w = m
selected = []

for i in range(n, 0, -1):
    if dp[i][w] != dp[i - 1][w]:
        selected.append(i)
        w = w - weight[i - 1]

selected.reverse()

print("Selected Items =", selected)
