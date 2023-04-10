#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

long long n, k, m, x, y;
long long a[M], b[M];

void process(){
    int n;
    cin >> n;

    deque<long long> dq;
    dq.push_back(9);
    while(1){
        long long temp = dq.front();
        dq.pop_front();
        if(temp % n != 0){
            dq.push_back(temp * 10);
            dq.push_back(temp * 10 + 9);
        }
        else{
            cout << temp;
            break;
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










