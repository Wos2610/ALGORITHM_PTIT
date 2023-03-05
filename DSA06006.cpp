#include<bits/stdc++.h>

using namespace std;

int a[1006], mark[1006];
int n, x, y, m;

void process(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n);

    for(int i = 0; i < n; i++){
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





