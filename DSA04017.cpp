#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

long long a[M], b[M];
vector<int> save;
long long m, n, k, x;


void process(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n - 1; i++){
        cin >> b[i];
    }

    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            cout << i + 1 << "\n";
            return;
        }
    }

}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}








