#include<bits/stdc++.h>
#define M 1000006

using namespace std;

int n, u;
int a[1006][1006];
int mark[1006];
vector<int> save;

void hamilton(int v){
    if(save.size() == n && a[v][u] == 1){
        for(int i = 0; i < save.size(); i++){
            cout << save[i] << " ";
        }
        cout << u;
        cout << "\n";
        return;
    }
    for(int i = 1; i <= n; i++){
        if(a[v][i] == 1 && mark[i] == 0){
            save.push_back(i);
            mark[i] = 1;
            hamilton(i);
            mark[i] = 0;
            save.pop_back();
        }
    }
}

int main(){
    cin >> n >> u;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    save.push_back(1);
    mark[u] = 1;
    hamilton(u);
}
