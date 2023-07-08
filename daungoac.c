#include <bits/stdc++.h>
#define endl "\n"
#define M 1000006

using namespace std;
int a[M];
int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
            int n;
            cin >> n;
            for(int i = 1; i <= n; i++){
                cin >> a[i];
            }
            stack<int> s;
            vector<pair<int, int>> pairs;

            for (int i = 1; i <= n; i++) {
                while (!s.empty() && a[i] >= a[s.top()]) {
                    pairs.push_back({s.top(), i});
                    s.pop();
                }

                if (!s.empty()) {
                    pairs.push_back({s.top(), i});
                }

                s.push(i);
            }

            cout << pairs.size();
        }

    }
}
