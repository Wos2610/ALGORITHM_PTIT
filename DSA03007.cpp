#include <bits/stdc++.h>
using namespace std;

int n, k;
long long a[1000001], b[1000001];

void process(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    sort(a, a + n);
    sort(b, b + n, greater<int>());

    long long sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i] * b[i];
    }


    cout << sum;
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
