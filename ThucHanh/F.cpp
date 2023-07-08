#include <bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int v, e, s, t, x, y, m, w, q, c = 99999999;
vector<vector<int>> save(1006);

void BFS(int u, map<pair<int, int>, int> d)
{
    int mark[v + 6] = {0};
    int path[v + 6] = {0};

    mark[u] = 1;
    queue<int> q;
    q.push(u);

    while (q.size())
    {
        int k = q.front();
        if (k == t)
        {
            vector<int> res;
            res.push_back(t);
            int temp = path[t];
            while (temp != s)
            {
                res.push_back(temp);
                temp = path[temp];
            }

            res.push_back(temp);
            int ans = 0;
            for (int i = res.size() - 1; i >= 1; i--)
            {
                ans = max(ans, d[{res[i], res[i - 1]}]);
                if(i != 1){
                    mark[res[i]] = 0;
                }
            }

            cout << ans <<  "* ";
            c = min(c, ans);
            m = 1;
        }
        q.pop();
        for (int i = 0; i < save[k].size(); i++)
        {
            int p = save[k][i];
            if (mark[p] == 0)
            {
                //mark[p] = 1;
                q.push(p);
                path[p] = k;
            }
        }
    }

    // if (m == 1)
    // {
    //     vector<int> res;
    //     res.push_back(t);
    //     int temp = path[t];
    //     while (temp != s)
    //     {
    //         res.push_back(temp);
    //         temp = path[temp];
    //     }

    //     res.push_back(temp);
    //     int ans = 9999999;
    //     for (int i = res.size() - 1; i >= 1; i--)
    //     {
    //         cout << res[i] << " ";
    //         ans = min(ans, d[{res[i], res[i - 1]}]);
    //     }
    //     cout << ans;
    // }

    cout << c << "\n";
}

void process()
{
    cin >> v >> e >> q;

    map<pair<int, int>, int> d;
    for (int i = 1; i <= e; i++)
    {
        cin >> x >> y >> w;
        d[{x, y}] = w;
        save[x].push_back(y);
    }

    while (q--)
    {
        m = 0;
        cin >> s >> t;
        if (s == t)
        {
            cout << s;
            m = 1;
        }
        else
        {
            BFS(s, d);
        }

        if (m == 0)
        {
            cout << "-1";
        }
        cout << "\n";
    }
}

int main()
{
    int T = 1;
    // cin >> T;

    while (T--)
    {
        process();
    }
}
