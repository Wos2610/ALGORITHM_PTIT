
#include <bits/stdc++.h>
using namespace std;

const long long M = 1e9 + 7;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n + 1];
		long long sum = 0;
		deque<int> q;
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		q.push_back(0);
		a[0] = 1e9 + 7;
		for (int i = 1; i <= n; i++)
		{
			while (q.size() > 1 && a[i] >= a[q.back()])
				q.pop_back();
			long long res = 0;
			if (q.size() == 1)
			{
				res += a[i] * i;
				res %= M;
				q.push_back(i);
			}
			else
			{
				q.push_back(i);
				for (int j = 1; j < q.size(); j++)
				{
					res += (q[j] - q[j - 1]) * a[q[j]] % M;
					res %= M;
				}
			}
			sum += res;
			sum %= M;
		}
		cout << sum << endl;
	}
}
