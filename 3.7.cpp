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

int soThanhPhanLienThong(){
    int dem = 0;
    for(int i = 1; i <= n; i++){
        if(mark[i] == 0){
            DFS(i);
            dem++;
        }
    }
    return dem;
}


int main(){
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }

    int n0 = soThanhPhanLienThong();
    int temp = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            mark[j] = 0;
        }

        mark[i] = 1;
        temp = soThanhPhanLienThong();
        if(temp > n0){
            cout << i << " ";
        }
    }
}
