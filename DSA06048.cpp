#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

long long a[M], b[M];
vector<int> save;
long long m, n, k, x;
string s;

void process(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b, b + n);

    for(int i = 0; i < n; i++){
        if(a[i] == b[0]){
            k = i;
            break;
        }
    }

    cout << k;
    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}








