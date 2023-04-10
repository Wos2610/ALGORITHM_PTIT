#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

long long n, k, m, x, y;
long long a[M], b[M];


void process(){
    cin >> n;
    long long sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }

    long long temp = 0;
    int mark = 0;
    for(int i = 0; i < n; i++){
        if(temp == sum - a[i]){
            cout << i + 1;
            mark = 1;
            break;
        }
        else{
            temp += a[i];
            sum -= a[i];
        }
    }

    if(mark == 0){
        cout << "-1";
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










