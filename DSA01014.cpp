#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int n, k, s, dem;
int a[26];

void Try(int i){
    if(i == k + 1){
        int sum = 0;
        for(int i = 1; i <= k; i++){
            sum += a[i];
        }
        if(sum == s){
            dem++;
        }
        return;
    }

    for(int j = a[i - 1] + 1; j <= n - k + i; j++){
        a[i] = j;
        Try(i + 1);
    }
}

int main(){
    while(1){
        dem = 0;
        cin >> n >> k >> s;
        if(n == 0 && k == 0 && s == 0){
           return 0;
        }
        Try(1);
        cout << dem << "\n";
    }
}









