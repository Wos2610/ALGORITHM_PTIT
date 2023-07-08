#include <bits/stdc++.h>
using namespace std;

string a, b;

void process(){
    cin >> a >> b;

    int n = a.size();
    int m = b.size();
    a = " " + a;
    b = " " + b;

    int f[n + 6][m + 6] = {0};

    for(int j = 1; j <= m; j++){
        f[0][j] = j;
    }

    for(int i = 1; i <= n; i++){
        f[i][0] = i;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i] == b[j]){
                f[i][j] = f[i - 1][j - 1];
            }
            else{
                f[i][j] = min(min(f[i - 1][j], f[i][j - 1]), f[i - 1][j - 1]) + 1;
            }
        }
    }

    cout << f[n][m];

    cout << "\n";
}

int main()
{
    int T ;
    cin >> T;
    while(T--){
        process();
    }
}
