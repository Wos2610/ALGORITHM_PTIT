#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

long long m, n, k, mark, x, y, dem;
long long a[1006][1006], b[M];
queue<int> q;

void BFS(){
    queue<pair<int, int>> q;
    map<pair<int, int>, int> mp;
    q.push({1, 1});
    mark = 0;
    long long temp = 0;
    while(q.size()){
        int i = q.front().first;
        int j = q.front().second;
        q.pop();
        temp = mp[{i, j}];
        if(i == m && j == n){
            cout << mp[{i, j}];
            mark = 1;
            break;
        }
        if(j + a[i][j] <= n && mp[{i, j + a[i][j]}] == 0){
            q.push({i, j + a[i][j]});
            mp[{i, j + a[i][j]}] = temp + 1;
        }

        if(i + a[i][j] <= m && mp[{i + a[i][j], j}] == 0){
            q.push({i + a[i][j], j});
            mp[{i + a[i][j], j}] = temp + 1;
        }
    }

    if(mark == 0){
        cout << "-1";
    }
}

void process(){
    cin >> m >> n;

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }

    BFS();

    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}










