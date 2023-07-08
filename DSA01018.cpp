#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int n, k;

int a[1006];

void process(){
    cin >> n >> k;

    for(int i = 1; i <= k; i++){
        cin >> a[i];
    }

    int i = k - 1;
    while(i > 0 && a[i] == a[i + 1] - 1){
        i--;
    }

    if(i == 0){
        for(int j = n - k + 1; j <= n; j++){
            cout << j << " ";
        }
        return;
    }

    a[i + 1]--;

    if(a[k] != n){
        for(int j = i + 2; j <= k; j++){
            a[j]++;
        }
    }

    for(int j = 1; j <= k; j++){
        cout << a[j] << " ";
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
