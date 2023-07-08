#include<bits/stdc++.h>
#define M 1000006
using namespace std;


int n;
int a[M], b[M], m[M];

void Try(int i){
    if(i == n + 1){
        for(int j = 1; j <= n; j++){
            cout << a[b[j]] << " ";
        }
        cout << "\n";
        return;
    }

    for(int j = 1; j <= n; j++){
        if(m[j] == 0){
            b[i] = j;
            m[j] = 1;
            Try(i + 1);
            m[j] = 0;
        }
    }
}

void process(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        m[i] = 0;
        b[i] = 0;
    }

    sort(a + 1, a + 1 + n);

    Try(1);
}

int main(){
    int T = 1;
    //cin >> T;
    while(T--){
        process();
    }
}



