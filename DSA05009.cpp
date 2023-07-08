#include <bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;
int n;
int a[M];

int check(int sum){
    if(sum % 2 == 1) return 0;
    sum /= 2;

    int f[sum + 6] = {0};

    f[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = sum; j >= a[i]; j--){
            if(f[j - a[i]] == 1){
                f[j] = 1;
            }
        }
    }

    return f[sum];
}

void process()
{
    cin >> n;

    int sum = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        sum += a[i];
    }

    if(check(sum)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
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
