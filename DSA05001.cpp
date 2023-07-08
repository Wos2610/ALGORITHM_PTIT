#include <bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

string s1, s2;
void process()
{
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();
    s1 = " " + s1;
    s2 = " " + s2;
    int f[n + 1][m + 1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            f[i][j] = 0;
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(s1[i] == s2[j]){
                f[i][j] = f[i - 1][j - 1] + 1;
            }
            else{
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);
            }
        }
    }

    cout << f[n][m];
    cout << "\n";
}

int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        process();
    }
}
