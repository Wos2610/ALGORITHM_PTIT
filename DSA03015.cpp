#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

int n, s, m;
int a[M], b[M];

int check(){
    if(n < m){
        return -1;
    }

    int sum = s * m;

    int res = sum /(6 * n);

    int du = sum - res * 6 * n;

    if(du < )

    if(sum % (6 * n) == 0){

    }
}
void process(){
    cin >> n >> s >> m;
    if(n < m){
        cout << "-1";
    }
    else{
        int sum = s * m;
        if(sum % n == 0){
            cout << sum/n;
        }
        else{
            cout << sum/n + 1;
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









