#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
long long Merge(long long *a, long long l, long long r, long long mid)
{
    long long p1 = mid - l + 1, p2 = r - mid, ans = 0;
    long long L[p1], R[p2];
    for (int i = 0; i < p1; i++)
        L[i] = a[l + i];
    for (int i = 0; i < p2; i++)
        R[i] = a[mid + i + 1];
    int i = 0, j = 0, k = l;
    while (i < p1 and j < p2)
    {
        if (L[i] <= R[j])
            a[k++] = L[i++];
        else
        {
            a[k++] = R[j++];
            ans += p1 - i;
        }
    }
    while (i < p1)
        a[k++] = L[i++];
    while (j < p2)
        a[k++] = R[j++];
    return ans;
}
long long calc(long long *a, int l, int r)
{
    long long ans = 0;
    int mid;
    if (l < r)
    {
        mid = (l + r) >> 1;
        ans += calc(a, l, mid);
        ans += calc(a, mid + 1, r);
        ans += Merge(a, l, r, mid);
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << calc(a, 0, n - 1) << endl;
    }
}
