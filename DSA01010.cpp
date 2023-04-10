#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int n, k;
int a[M], b[M];

int HVKT(int mark[]){
    int i = k;
    while(i > 0 && a[i] >= n - k + i){
        i--;
    }
    if(i == 0){
        return k;
    }

    a[i]++;

    for(int j = i + 1; j <= k; j++){
        a[j] = a[j - 1] + 1;
    }

    int res = 0;
    for(int j = 1; j <= k; j++){
        mark[a[j]]++;
    }

    for(int j = 1; j <= n; j++){
        if(mark[j] == 2){
            res++;
        }
    }
    return res;
}

void process(){
    cin >> n >> k;
    int mark[n + 6] = {0};
    for(int i = 1; i <= k; i++){
        cin >> a[i];
        mark[a[i]]++;
    }

    int i = k;
    while(i > 0 && a[i] >= n - k + i){
        i--;
    }
    if(i == 0){
        cout << k << "\n";
        return;
    }

    a[i]++;

    for(int j = i + 1; j <= k; j++){
        a[j] = a[j - 1] + 1;
    }

    int res = 0;
    for(int j = 1; j <= k; j++){
        mark[a[j]]++;
    }

    for(auto j : mark){
        if(j == 2){
            res++;
        }
    }
    cout << k - res << "\n";

}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}









