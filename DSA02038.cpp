#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[26], b[26];

void Try(int i){
    if(i == k + 1){
        for(int j = 1; j <= k; j++){
            cout << b[a[j]] << " ";
        }
        cout << "\n";
        return;
    }

    for(int j = a[i - 1] + 1; j <= n - k + i; j++){
        a[i] = j;
        Try(i + 1);
    }
}

void process(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> b[i];
    }

    sort(b + 1, b + 1 + n);

    Try(1);
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
