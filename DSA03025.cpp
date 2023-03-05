#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

int n, s, m, x, y;
int a[M], b[M];

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}

void process(){
    cin >> n;

    vector<pair<int, int>> save;

    for(int i = 1; i <= n; i++){
        cin >> x >> y;
        save.push_back({x, y});
    }

    sort(save.begin(), save.end(), cmp);

    int d = 1;
    int i = 0;
    for(int j = 1; j < n; j++){
        if(save[j].first >= save[i].second){
            d++;
            i = j;
        }
    }

    cout << d << "\n";

}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}









