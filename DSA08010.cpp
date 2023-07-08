#include<bits/stdc++.h>
#define M 100006
#define MOD 1000000007

using namespace std;

int n;
long long f[1006];

void process(){
    cin >> n;

    map<int, int> mark;

    queue<pair<int, int>> q;
    q.push({n, 0});
    mark[n] = 1;

    while(q.size()){
        int k = q.front().first;
        int d = q.front().second;
        mark[k] = 1;
        q.pop();

        if(k == 1){
            cout << d << "\n";
            return;
        }

        if(k - 1 >= 0 && mark[k - 1] == 0){
            mark[k - 1] = 1;
            q.push({k - 1, d + 1});
        }

        for(int i = 2; i <= sqrt(k); i++){
            if(k % i == 0 && mark[k/i] == 0){
                mark[k/i] = 1;
                q.push({k/i, d + 1});
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T = 1;
    cin >> T;

    while(T--){
        process();
    }
}
