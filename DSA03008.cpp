#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

long long a[M], b[M];
vector<int> save;
long long m, n1, n2, n3, k, x, y;
string s;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}

void process(){
    int n;
    cin >> n;

    vector<pair<int, int>> save;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++){
        cin >> b[i];
    }

    for(int i = 1; i <= n; i++){
        save.push_back({a[i], b[i]});
    }

    sort(save.begin(), save.end(), cmp);

    int i = 0;
    vector<int> s;
    s.push_back(1);
    for(int j = 1; j < n; j++){
        if(save[j].first >= save[i].second){
            s.push_back(j);
            i = j;
        }
    }

    cout << s.size();

    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}








