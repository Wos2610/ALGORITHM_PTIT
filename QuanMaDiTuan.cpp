#include<bits/stdc++.h>
#define M 1000006
using namespace std;

int c[M], l[M], r[M];
vector<pair<int, int>> save;
int n, d, k;
long long x;
int dx[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, 1};
int m[1006][1006];

void Try(int i, int j, int d){
    if(d == n * n + 1){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                printf("%2d ", m[i][j]);
            }
            cout << "\n";
        }
        return;
    }

    for(int k = 0; k < 8; k++){
        int x = i + dx[k];
        int y = j + dy[k];
        if((x >= 1 && x <= n) && (y >= 1 && y <= n) && !m[x][y]){
            m[x][y] = d;
            Try(x, y, d + 1);
            m[x][y] = 0;
        }
    }


}
void process(){
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            m[i][j] = 0;
        }
    }

    m[1][1] = 1;
    Try(1, 1, 2);

}

int main(){
    int T;
    T = 1;
    while(T--){
        process();
    }
}







