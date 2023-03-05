#include<bits/stdc++.h>

using namespace std;

int a[1006];
int n, k;

void process(){
    cin >> n >> k;

    for(int i = 1; i <= k; i++){
        cin >> a[i];
    }

    int m = k;
    while(m > 0 && a[m] >= n - k + m){
        m--;
    }

    if(m == 0){
        for(int i = 1; i <= k; i++){
            cout << i << " ";
        }
    }
    else{
        a[m]++;
        for(int i = m + 1; i <= k; i++){
            a[i] = a[i - 1] + 1;
        }
        for(int i = 1; i <= k; i++){
            cout << a[i] << " ";
        }
    }
    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}
