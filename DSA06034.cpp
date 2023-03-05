#include<bits/stdc++.h>
#define M 1000006
using namespace std;

long long a[M], m[M], r[M];
vector<int> save;
long long n, k;

void process(){
    cin >> n >> k;

    map<long long, long long> mark;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mark[a[i]]++;
    }

    long long d = 0;
    for(auto i : mark){
        if(i.first + i.first == k){
            d += (i.second) * (i.second - 1);
        }
        else{
            d += i.second * (mark[k - i.first]);
        }
    }
    cout << d/2 << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}








