#include<bits/stdc++.h>
#define M 1000006
using namespace std;

int a[M], b[M];
vector<int> save;
int n, d, k, m;
long long x;

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

void process(){
    cin >> n;

    map<int, int> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        m[a[i]]++;
    }

    vector<pair<int, int>> v;

    for(auto i : m){
        v.push_back({i.first, i.second});
    }

    sort(v.begin(), v.end(), cmp);

    for(auto i : v){
            for(int j = 0; j < i.second; j++){
                cout << i.first << " ";
            }
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





