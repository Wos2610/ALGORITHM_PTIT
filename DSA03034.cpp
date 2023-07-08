#include <bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

long long a[M], b[M];
vector<int> save;
long long m, n1, n2, n3, k, x;
string s;

void process()
{
    cin >> n1 >> n2 >> n3;

    int mark = 0;
    map<long long, int> m1, m2, m3;
    vector<long long> v;
    for (int i = 0; i < n1; i++)
    {
        cin >> x;
        m1[x]++;
    }

    for (int i = 0; i < n2; i++)
    {
        cin >> x;
        m2[x]++;
    }

    for (int i = 0; i < n3; i++)
    {
        cin >> x;
        m3[x]++;
    }

    for (auto i : m1)
    {
        long long k1 = min(i.second, m2[i.first]);
        long long k2 = min(m2[i.first], m3[i.first]);
        long long k = min(k1, k2);
        for (int j = 0; j < k; j++)
        {
            v.push_back(i.first);
        }
    }

    if (v.size() == 0)
    {
        cout << "NO" << endl;
        return;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        process();
    }
}
