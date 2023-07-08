#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

int n;
int a[M], inc[M], de[M];

void process(){
    cin >> n ;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
        inc[i] = 1;
        de[i] = 1;
    }

    for(int i = 2; i <= n; i++){
        if(a[i] > a[i - 1]){
            inc[i] = inc[i - 1] + 1;
        }
    }

    for(int i = n - 1; i >= 1; i--){
        if(a[i] > a[i + 1]){
            de[i] = de[i + 1] + 1;
        }
    }

    int res = 0;
    for(int i = 1; i <= n; i++){
        res = max(res, inc[i] + de[i] - 1);
    }

    cout << res;
    cout << "\n";
}

int main(){
    int T = 1;
    cin >> T;

    while(T--){
        process();
    }
}












