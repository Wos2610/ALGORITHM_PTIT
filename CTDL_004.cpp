#include <bits/stdc++.h>
using namespace std;

int n, k, dem;
int a[106], b[106];

void Try(int i){
    if(i == k + 1){
        for(int j = 1; j < k; j++){
            if(b[a[j]] >= b[a[j + 1]]){
                return;
            }
        }
        dem++;
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

    Try(1);

    cout << dem;
}

int main()
{
    int T = 1;
    //cin >> T;
    while(T--){
        process();
    }
}
