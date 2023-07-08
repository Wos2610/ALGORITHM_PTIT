#include <bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

int n;
int a[M], f[M], b[M];

void process()
{
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
        f[a[i]] = i;
    }

    for(int i = 1; i <= n; i++){
        if(f[i] > f[i - 1]){
            b[i] = b[i - 1] + 1;
        }
        else{
            b[i] = 1;
        }
    }

    sort(b + 1, b + 1 + n);
    cout << n - b[n] << "\n";

}

int main()
{
    int T = 1;
    //cin >> T;
    while (T--)
    {
        process();
    }
}
