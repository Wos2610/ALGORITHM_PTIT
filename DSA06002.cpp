#include<bits/stdc++.h>

using namespace std;

int a[1006], mark[1006];
int n, x, y;

void process(){
    cin >> n >> x;
    vector<pair<int, int>> b;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        b.push_back({abs(x - a[i]), i});
    }
    sort(b.begin(), b.end());

    for(int i = 0; i < n; i++){
        cout << a[b[i].second] << " ";
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





