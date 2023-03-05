#include<bits/stdc++.h>
#define M 1000006
using namespace std;

int a[1000006], mark[1000006];
vector<int> save;
int n, d, k, m;
long long x;

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





