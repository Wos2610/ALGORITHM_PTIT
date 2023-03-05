#include<bits/stdc++.h>
#define M 1000006
using namespace std;

long long a[M], m[M], r[M];
vector<int> save;
int n;

void process(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n);


    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            long long x = (a[i] * a[i] + a[j] * a[j]);
            long long c = sqrt(x);
            if(c * c == x && binary_search(a, a + n, c) == true){
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








