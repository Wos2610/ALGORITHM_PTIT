#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[1006][1006];

struct Vertex{
    int i;
    int j;
    int d;
};

void BFS(){
    queue<Vertex> q;
    q.push({1, 1, 0});

    map<pair<int, int>, int> mark;

    while(q.size()){
        int x = q.front().i;
        int y = q.front().j;
        int b = q.front().d;
        mark[{x, y}] = 1;
        q.pop();
        if(x == n && y == m){
            cout << b << "\n";
            return;
        }
        if(mark[{x + 1, y}] == 0 && x + 1 <= n){
            q.push({x + 1, y, b + abs(a[x][y] - a[x + 1][y])});
        }
        if(mark[{x, y + 1}] == 0 && y + 1 <= m){
            q.push({x, y + 1, b + abs(a[x][y] - a[x][y + 1])});
        }
        if(mark[{x + 1, y + 1}] == 0 && x + 1 <= n && y + 1 <= m){
            q.push({x + 1, y + 1, b + abs(a[x][y] - a[x + 1][y + 1])});
        }
    }

}
void process(){
    cin >> n >> m;

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            a[i][j] = 0;
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }

    BFS();



}

int main(){
    int T = 1;
    cin >> T;
    while(T--){
        process();
    }
}
