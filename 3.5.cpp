#include<bits/stdc++.h>
#define M 1000006

using namespace std;

int n, dem, s, t, m1, m2;
int a[1006][1006];
int mark1[M], mark2[M];
int truoc1[M], truoc2[M];

void DFS(int u){
    if(u > n){
        return;
    }
    if(u == t){
        cout << "DFS path: ";
        while(u != s){
            cout << u << " ";
            u = truoc1[u];
        }
        cout << s << "\n";
        return;
    }
    mark1[u] = 1;
    for(int i = 1; i <= n; i++){
        if(a[u][i] == 1 && mark1[i] == 0){
            truoc1[i] = u;
            DFS(i);
        }
    }
}

void BFS(int u){
    queue<int> q;
    q.push(u);
    mark2[u] = 1;

    while(q.size() != 0){
        int v = q.front();
        q.pop();
        if(v == t){
            cout << "BFS path: ";
            m2 = 1;
            while(t != s){
                cout << t << " ";
                t = truoc2[t];
            }
            cout << s;
            return;
        }
        for(int i = 1; i <= n; i++){
            if(a[v][i] == 1 && mark2[i] == 0){
                q.push(i);
                truoc2[i] = v;
                mark2[i] = 1;
            }
        }
    }
    if(m2 == 0){
        cout << "no path";
        return;
    }
}

int main(){
    cin >> n;
    cin >> s >> t;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }

    DFS(s);
    BFS(s);

}
