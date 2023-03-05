#include<bits/stdc++.h>
#define M 1000006
using namespace std;

int a[M], m[M], r[M];
vector<int> save;
int n;

void process(){
    cin >> n;

    map<int, int> mark;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        mark[a[i]]++;
    }

    for(auto i : a){
        if(mark[i] > 1){
            cout << i << " ";
            cout << "\n";
            return;
        }
    }

    cout << "NO\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}







