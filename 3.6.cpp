#include<bits/stdc++.h>
#define M 1000006

using namespace std;

int n, dem;
int a[1006][1006];
int mark[M];

void DFS(int u){
    if(u > n){
        return;
    }
    mark[u] = 1;

    for(int i = 1; i <= n; i++){
        if(a[u][i] == 1 && mark[i] == 0){
            DFS(i);
        }
    }
}

int isStrong(){
    for(int i = 1; i <= n; i++){
        DFS(i);
        for(int j = 1; j <= n; j++){
            if(mark[j] == 0){
                return 0;
            }
            else{
                mark[j] = 0;
            }
        }

    }
    return 1;
}

int main(){
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }


    if(isStrong() == 1){
        cout << "strongly connected";
    }
    else{
        cout << "not strongly connected";
    }
}
