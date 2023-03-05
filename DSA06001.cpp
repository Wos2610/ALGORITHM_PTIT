#include<bits/stdc++.h>

using namespace std;

int a[1006], mark[1006];
int n;

void process(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());

    for(int i = 0; i < (n + 1)/2; i++){
        cout << a[i] << " ";
        if(i != n - i - 1){
            cout << a[n - i - 1] << " ";
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





