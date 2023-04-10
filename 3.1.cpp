#include<bits/stdc++.h>
#define M 1000006

using namespace std;

int n;
int a[1006][1006];
int mark[M];

void DFS(int u){
    cout << u << " ";
    mark[u] = 1;
    for(int v = 1; v <= n; v++){
        if(a[u][v] == 1 && mark[v] == 0){
            DFS(v);
        }
    }
}

int main(){
    cin >> n;

    for(int i = 1;i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }

    DFS(11);
}
