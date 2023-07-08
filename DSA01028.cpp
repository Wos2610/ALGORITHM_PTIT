#include<bits/stdc++.h>
#define M 1000006

using namespace std;

int n, k, m;
int a[M], b[M];
set<int> s;
vector<int> save;

void Try(int i){
    if(i == k + 1){
        for(int j = 1; j <= k; j++){
            cout << save[b[j] - 1] << " ";
        }
        cout << "\n";
        return;
    }

    for(int j = b[i - 1] + 1; j <= m - k + i; j++){
        b[i] = j;
        Try(i + 1);
    }
}

void process(){
    cin >> n >> k;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
        s.insert(a[i]);
    }

    m = s.size();
    for(auto i : s){
        save.push_back(i);
    }

    Try(1);

}

int main(){
    process();
}



