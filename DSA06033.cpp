#include <bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

int n;
int a[M];

void process()
{
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int left[n + 6] = {0};

    left[0] = a[0];

    for(int i = 1; i < n; i++){
        left[i] = min(left[i - 1], a[i]);
    }

    int i = n - 1;
    int j = n - 1;

    int res = -1;
    while(i >= 0 && j >= 0){
        if(a[j] > left[i]){
            res = max(res, j - i);
            i--;
        }
        else{
            j--;
        }
    }

    cout << res << "\n";
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
