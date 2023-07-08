#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int n, m, k;
string s1, s2, s3;

void process(){
    cin >> n >> m >> k;
    cin >> s1 >> s2 >> s3;

    s1 = " " + s1;
    s2 = " " + s2;
    s3 = " " + s3;

    int f[n + 6][m + 6][k + 6];

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            for(int p = 0; p <= k; p++){
                f[i][j][p] = 0;
            }
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            for(int p = 1; p <= k; p++){
                if(s1[i] == s2[j] && s2[j] == s3[p]){
                    f[i][j][p] = f[i - 1][j - 1][p - 1] + 1;
                }
                else{
                    f[i][j][p] = max(f[i - 1][j][p], max(f[i][j - 1][p], f[i][j][p - 1]));
                }
            }
        }
    }

    cout << f[n][m][k];
    cout << "\n";
}

int main(){
    int T = 1;
    cin >> T;

    while(T--){
        process();
    }
}











