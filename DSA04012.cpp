#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int m, n;
void process(){
    cin >> m >> n;

    int a[m + 6] = {0};
    int b[n + 6] = {0};
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    int res[m + n + 6] = {0};
    for(int i = m - 1; i >= 0; i--)
    {
        for(int j = n - 1; j >= 0; j--)
        {
            res[i + j] += a[i] * b[j];
        }
    }

    for(int i = 0; i < m + n - 1; i++){
        cout << res[i] << " ";
    }

    cout << "\n";
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        process();
    }
}
