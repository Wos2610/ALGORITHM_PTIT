#include<bits/stdc++.h>
#define M 100006
#define MOD 1000000007

using namespace std;

int r, c;

int r0[] = {1, -1, 0, 0};
int c0[] = {0, 0, 1, -1};

struct Point
{
    int x;
    int y;
    int d;
};

void process()
{
    cin >> r >> c;

    int a[r + 6][c + 6] = {0};

    for(int i = 1; i <= r; i++)
    {
        for(int j = 1; j <= c; j++)
        {
            cin >> a[i][j];
        }
    }

    queue<Point> q;
    map<pair<int, int>, int> m;

    for(int i = 1; i <= r; i++)
    {
        for(int j = 1; j <= c; j++)
        {
            if(a[i][j] == 2)
            {
                for(int k = 0; k < 4; k++)
                {
                    int x1 = i + r0[k];
                    int y1 = j + c0[k];
                    if(a[x1][y1] == 1 && m[ {x1, y1}] == 0)
                    {
                        //cout << x1 << " " << y1 << "\n";
                        q.push({x1, y1, 1});
                        m[ {x1, y1}] = 1;
                    }
                }

            }
        }
    }

    int res = 0;
    while(q.size())
    {
        int i = q.front().x;
        int j = q.front().y;
        int d = q.front().d;
        res = d;
        q.pop();

        for(int k = 0; k < 4; k++)
        {
            int x1 = i + r0[k];
            int y1 = j + c0[k];
            if(a[x1][y1] == 1 && m[{x1, y1}] == 0)
            {
                q.push({x1, y1, d + 1});
                m[{x1, y1}] = 1;
            }
        }
    }

    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            if(a[i][j] == 1 && m[{i, j}] == 0){
                cout << "-1\n";
                return;
            }
        }
    }

    cout << res << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T = 1;
    cin >> T;

    while (T--)
    {
        process();
    }
    return 0;
}



