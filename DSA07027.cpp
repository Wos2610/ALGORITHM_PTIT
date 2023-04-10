#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int n;
int a[M];

void process(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    priority_queue<int> pq;

    pq.push(a[n - 1]);

    for(int i = n - 2; i >= 0; i--){

    }

    cout << res << "\n";

}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}









