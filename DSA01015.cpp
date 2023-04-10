#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int n, k;
int a[M], b[M];

void process(){
    cin >> n;
    queue<long long> q;
    q.push(9);
    long long res = 9;
    while(q.size()){
        long long temp = q.front();
        q.pop();
        if(temp % n == 0){
            cout << temp << "\n";
            return;
        }
        q.push(temp * 10);
        q.push(temp * 10 + 9);
    }

}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}









