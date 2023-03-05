#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

long long a[M], b[M];
vector<int> save;
long long m, n1, n2, n3, k, x;
string s;

void process(){
    int n;
    cin >> n;

    priority_queue<long long, vector<long long>, greater<long long>> pq;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        pq.push(a[i]);
    }

    long long res = 0;
    while(pq.size() >= 2){
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        res += (a + b);
        pq.push(a + b);
    }

    cout << res;

    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}








