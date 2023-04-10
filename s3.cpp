#include <bits/stdc++.h>
using namespace std;

int n, k, dem;
int a[36];



void Try(int i, int m){
    if(i == m + 1){
        for(int j = 1; j <= m; j++){
            cout << a[j];
        }
        for(int j = m; j >= 1; j--){
            cout << a[j];
        }
        cout << "\n";
        return;
    }

    for(int j = 0; j <= 1; j++){
        a[i] = j;
        Try(i + 1, m);
    }

}

void process(){
    cin >> n;
    for(int i = 1; i <= n/2; i++){
        Try(1, i);
    }
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        process();
    }
}
