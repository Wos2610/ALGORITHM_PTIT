#include<bits/stdc++.h>
#define M 1000006
using namespace std;

int a[M], l[M], r[M];
vector<int> save;
int n, d, k, m;
long long x;

void process(){
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    priority_queue<int> pq;

    for(int i = 0; i < k; i++){
        pq.push(a[i]);
    }

    for(int i = k; i < n; i++){
        cout << pq.top();
        pq.po
    }
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}







