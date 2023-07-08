#include <bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

int a[M], l[M];
int n;

void process()
{
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        l[i] = 1;
    }

    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if(a[i] > a[j]){
                l[i] = max(l[i], l[j] + 1);
            }
        }
    }

    sort(l + 1, l + 1 + n);
    cout << l[n];
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
