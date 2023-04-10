#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

long long n, k, m, x, y;
long long a[M], b[M];

void binary(int i){
    string res = "";
    while(i > 0){
        if(i % 2 == 0){
            res = "0" + res;
        }
        else{
            res = "1" + res;
            i--;
        }
        i /= 2;
    }

    cout << res << " ";
}

void process(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        binary(i);
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










