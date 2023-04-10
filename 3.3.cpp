#include<bits/stdc++.h>
#define M 1000006

using namespace std;

int n;
int a[106][106];
int mark[106];

int main(){
    cin >> n;

    for(int i = 1;i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }

    queue<int> q;

    q.push(12);
    mark[12] = 1;
    cout << "12 ";

    while(q.size() != 0){
        int u = q.front();
        q.pop();

        for(int v = 1; v <= n; v++){
            if(a[u][v] == 1 && mark[v] == 0){
                cout << v << " ";
                mark[v] = 1;
                q.push(v);
            }
        }
    }
}
