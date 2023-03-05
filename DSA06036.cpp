#include<bits/stdc++.h>
#define M 1000006
using namespace std;

long long a[M], m[M], r[M];
vector<int> save;
long long n, k;

void process(){
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n);


    for(int i = 0; i < n - 2; i++){
        for(int j = i + 1; j < n - 1; j++){
            bool x = binary_search(a + j + 1, a + n, k - a[i] - a[j]);
            if(x){
                cout << "YES\n";
                return;
            }
        }
    }

    cout << "NO\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}








