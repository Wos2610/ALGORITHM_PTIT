#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

long long n, x;
long long a[1000001];

void process(){
    cin >> n;
    priority_queue<long long, vector<long long>, greater<long long>> pq;

    for(int i = 0; i < n; i++){
        cin >> x;
        pq.push(x);
    }

    long long sum = 0;
    while(pq.size() >= 2){
        long long x1 = pq.top();
        pq.pop();
        long long x2 = pq.top();
        pq.pop();
        sum = (sum + x1) % MOD;
        sum = (sum + x2) % MOD;
        pq.push((x1 + x2) % MOD);
    }

//    if(pq.size()){
//        sum += pq.top();
//    }

    cout << sum;
    cout << "\n";
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        process();
    }
}
