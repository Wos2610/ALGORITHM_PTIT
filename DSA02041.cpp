#include <bits/stdc++.h>
using namespace std;

long long n;
void BFS(){
    queue<pair<long long, long long>> q;
    map<long long, int> m;

    q.push({n, 0});

    while(q.size() != 0){
        long long temp = q.front().first;
        long long dem = q.front().second;
        q.pop();
        if(temp == 1){
            cout << dem << "\n";
            return;
        }
        if(temp % 2 == 0 && temp / 2 > 0 && m[temp * 2] == 0){
            q.push({temp / 2, dem + 1});
        }
        if(temp % 3 == 0 && temp / 3 > 0 && m[temp * 3] == 0){
            q.push({temp / 3, dem + 1});
        }
        if(temp - 1 > 0 && m[temp - 1] == 0){
            q.push({temp - 1, dem + 1});
        }
    }
}
void process(){
    cin >> n;

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
