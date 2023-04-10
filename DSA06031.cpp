#include<bits/stdc++.h>
#define M 1000006
using namespace std;

int a[M], l[M], r[M];
vector<int> save;
int n, d, k, m;
long long x;

void process(){
    cin >> n >> k;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    deque<int> dq;

    for(int i = 1; i <= n; i++){
        while(dq.size() && a[dq.back()] <= a[i]){
            dq.pop_back();
        }

        if(dq.size() && dq.front() + k <= i){
            dq.pop_front();
        }

        dq.push_back(i);
        if(i >= k){
            cout << a[dq.front()] << " ";
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







