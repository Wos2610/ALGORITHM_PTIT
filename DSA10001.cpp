#include<bits/stdc++.h>
#define M 1000006
using namespace std;

int n, m, x, y, z, t, d;
char a[1006][1006];
int id[] = {0, 0, 1, -1};
int jd[] = {1, -1, 0, 0};
map<pair<int, int>, int> mk;

void DFS(int i, int j, int k, int v)
{
    if(d == 1){
            return;
    }
    if(i == z && j == t)
    {
        if(k - 1 <= 2)
        {
            cout << "YES\n";
            d = 1;
            return;
        }
    }

    for(int l = 0; l < 4; l++)
    {
        int x0 = i + id[l];
        int y0 = j + jd[l];

        if(mk[{x0, y0}] == 0 && a[x0][y0] != '*' && x0 >= 1 && x0 <= n && y0 >= 1 && y0 <= n)
        {
            mk[ {x0, y0}] = 1;
            if(l != v)
            {
                DFS(x0, y0, k + 1, l);
            }
            else
            {
                DFS(x0, y0, k, l);
            }
            mk[{x0, y0}] = 0;
        }
    }
}

void process()
{
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            mk[{i, j}] = 0;
        }
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if(a[i][j] == 'S')
            {
                x = i;
                y = j;
            }
            else if(a[i][j] == 'T')
            {
                z = i;
                t = j;
            }
        }
    }

    d = 0;
    DFS(x, y, 0, -1);
    if(d == 0) cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T = 1;
    cin >> T;

    while(T--)
    {
        process();
    }
}
