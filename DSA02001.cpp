#include<bits/stdc++.h>

using namespace std;

int a[1006], b[1006], mark[1006];
int n, k, d;

void Try(int n){
    if(n > 0){
        cout << "[";
        for(int i = 0; i < n; i++){
            cout << a[i];
            if(i != n - 1){
                cout << " ";
            }
            else{
                cout << "]\n";
            }
        }

        for(int i = 0; i < n - 1; i++){
            a[i] = a[i] + a[i + 1];
        }
        Try(n - 1);
    }
}

void process(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    Try(n);

    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}




