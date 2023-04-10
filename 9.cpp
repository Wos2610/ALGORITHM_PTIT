#include<iostream>
#include<algorithm>
#include<vector>
#define M 1000006

using namespace std;
int n, m;
int a[M];
int l[5006][5006];
vector<pair<int, int>> p(M);

void process(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(j - p[i].first >= 0){
                l[i][j] =  max(l[i - 1][j], l[i - 1][j - p[i].first] + p[i].second);
            }
            else{
                l[i][j] = l[i - 1][j];
            }
        }
    }
    cout << l[n][m];
}

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> p[i].first >> p[i].second;
    }
    process();
}
