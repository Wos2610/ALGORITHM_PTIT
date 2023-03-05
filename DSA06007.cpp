#include<bits/stdc++.h>

using namespace std;

int a[1006], b[1006];
int n, x, y, m;

void process(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b, b + n);

    int l = 0;
    int r = n - 1;

    while(a[l] == b[l]){
        l++;
    }

    while(a[r] == b[r]){
        r--;
    }

    cout << l + 1 << " " << r + 1;
    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}





