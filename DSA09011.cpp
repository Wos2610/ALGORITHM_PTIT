#include<bits/stdc++.h>
#define M 100006
#define MOD 1000000007

using namespace std;

int n, m;
int a[1006][1006];

int ix[] = {1, 1, 1, -1, -1, -1, 0, 0};
int jx[] = {-1, 0, 1, -1, 0, 1, 1, -1};

void BFS(int i, int j){
    queue<pair<int, int>> q;
    q.push({i, j});
    a[i][j] = 0;

    while(q.size()){
        int x0 = q.front().first;
        int y0 = q.front().second;
        q.pop();
        for(int k = 0; k < 8; k++){
            int x = x0 + ix[k];
            int y = y0 + jx[k];
            if(a[x][y] == 1){
                q.push({x, y});
                a[x][y] = 0;
            }
        }
    }

}

void process()
{
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }

    int dem = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j] == 1){
                BFS(i, j);
                dem++;
            }
        }
    }
    cout << dem << "\n";
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



