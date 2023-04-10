#include <bits/stdc++.h>
using namespace std;
int cnt(string s)
{
	int n = s.size();
	int dp[n + 1][n + 1] = {};
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (s[i - 1] == s[j - 1] && i != j)
				dp[i][j] = 1 + dp[i - 1][j - 1];
			else
				dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
	return dp[n][n];
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		string s;
		cin >> n >> s;
		cout << cnt(s) << endl;
	}
}
