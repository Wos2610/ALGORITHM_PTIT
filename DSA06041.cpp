#include<bits/stdc++.h>
#define M 1000006
using namespace std;

int a[M], m[M], r[M];
vector<int> save;
int n;

void process(){
    cin >> n;

    map<long long, int> mark;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        mark[a[i]]++;
    }

    int maxx = -1;
    long long res = 0;

    for(auto i : a){
        if(mark[i] > maxx){
            maxx = mark[i];
            res = i;
        }
    }

    if(maxx > n/2){
        cout << res;
    }
    else{
        cout << "NO";
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







