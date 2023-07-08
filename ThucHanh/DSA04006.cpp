#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
long long Find(long long pos, long long n, long long ctr)
{
	if (pos & 1)
		return 1;
	if (pos == ctr)
		return (n % 2);
	if (pos > ctr)
		return Find(pos - ctr, n / 2, ctr / 2);
	return Find(pos, n / 2, ctr / 2);
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		long long n, l, r;
		cin >> n >> l >> r;
		long long ctr = pow(2, (long long)log2(n)), ans = 0;
		for (long long i = l; i <= r; i++)
			ans += Find(i, n, ctr);
		cout << ans << "\n";
	}
}
