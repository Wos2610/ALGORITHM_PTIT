#include<bits/stdc++.h>
#define M 1000006
using namespace std;

int a[M], b[M];
vector<int> save;
int n, d, k, m;
long long x;

void process(){
    cin >> n >> m;

    vector<int> save;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        save.push_back(a[i]);
    }

    for(int i = 0; i < m; i++){
        cin >> b[i];
        save.push_back(b[i]);
    }

    sort(save.begin(), save.end());

    for(auto i : save){
        cout << i << " ";
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





