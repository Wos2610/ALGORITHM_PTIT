#include<bits/stdc++.h>

using namespace std;

int a[1006], mark[1006];
int n, d, k;
long long x;

void process(){
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n, greater<int>());

    for(int i = 0; i < k; i++){
        cout << a[i] << " ";
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





