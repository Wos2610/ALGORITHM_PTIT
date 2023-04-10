#include <bits/stdc++.h>
using namespace std;

long long a, b;
void BFS(){
    queue<pair<long long, long long>> q;
    map<long long, int> m;

    q.push({a, 0});

    while(q.size() != 0){
        long long temp = q.front().first;
        m[temp] = 1;
        long long dem = q.front().second;
        if(temp == b){
            cout << dem << "\n";
            return;
        }
        q.pop();
        if(m[temp - 1] == 0 && temp - 1 > 0){
            q.push({temp - 1, dem + 1});
        }
        if(m[temp * 2] == 0 && temp * 2 <= 10001){
            q.push({temp * 2, dem + 1});
        }
    }
}
void process(){
    cin >> a >> b;

    BFS();
}

int main()
{
    int T ;
    cin >> T;
    while(T--){
        process();
    }
}
