#include <iostream>
#include <algorithm>

using namespace std;

int n, k;
int w[101];
int v[101];
int dp[101][1000001];

void solution(){
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= k ; j++)
        {
            if (j - w[i] >= 0)
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    cout << dp[n][k];
}

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i] >> v[i];
    }
    solution();
}
