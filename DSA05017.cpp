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
        inc[i] = a[i];
        de[i] = a[i];
    }

    for(int i = 2; i <= n; i++){
        for(int j = 1; j < i; j++){
            if(a[i] > a[j]){
                inc[i] = max(inc[i], inc[j] + a[i]);
            }
        }
    }

    for(int i = n - 1; i >= 1; i--){
        for(int j = n; j > i; j--){
            if(a[i] > a[j]){
                de[i] = max(de[i], de[j] + a[i]);
            }
        }
    }

    int res = 0;
    for(int i = 1; i <= n; i++){
        res = max(res, inc[i] + de[i] - a[i]);
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












