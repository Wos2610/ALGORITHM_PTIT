#include <bits/stdc++.h>
using namespace std;
#define M 1000006
#define MOD 1000000007

int n, m;

void process(){
    cin >> n >> m;

    int a[n + 6][m + 6];
    for(int i = 1; i <= m; i++){
        a[0][i] = 0;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j] == 1){
                a[i][j] = a[i - 1][j] + 1;
            }
        }
    }

    int res = 0;
    for(int i = 1; i <= n; i++){
        int l[m + 6], r[m + 6];
        for(int j = 1; j <= m; j++){
            r[j] = m + 1;
            l[j] = 0;
        }

        stack<int> st1, st2;
        st1.push(0);
        for(int j = 1; j <= m; j++){
            while(st1.size() && a[i][st1.top()] > a[i][j]){
                r[st1.top()] = j;
                st1.pop();
            }
            st1.push(j);
        }

        st2.push(m + 1);
        for(int j = m; j >= 1; j--){
            while(st2.size() && a[i][st2.top()] > a[i][j]){
                l[st2.top()] = j;
                st2.pop();
            }
            st2.push(j);
        }

        for(int j = 1; j <= m; j++){
            res = max(res, abs(r[j] - l[j] - 1) * a[i][j]);
        }
    }



    cout << res << "\n";
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        process();
    }
}
