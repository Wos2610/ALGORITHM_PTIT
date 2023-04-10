#include <bits/stdc++.h>
using namespace std;

int n, k, dem;
int a[26];

int isPrime(long long m){
    if(m == 0 || m == 1){
        return 0;
    }

    if(m == 2){
        return 1;
    }
    if(m % 2 ==  0){
        return 0;
    }

    for(long long i = 2; i * i <= m; i++){
        if(m % i == 0){
            return 0;
        }
    }

    return 1;
}

void Try(int i){
    if(i == k + 1){
        dem++;
        if(isPrime(dem) == 1){
            cout << dem << ": ";
            for(int j = 1; j <= k; j++){
                cout << a[j]<< " ";
            }
            cout << "\n";
        }
        return;
    }

    for(int j = a[i - 1] + 1; j <= n - k + i; j++){
        a[i] = j;
        Try(i + 1);
    }
}

void process(){
    cin >> n >> k;
    //cout << isPrime(3);
    Try(1);
}

int main()
{
    int T = 1;
    //cin >> T;
    while(T--){
        process();
    }
}
