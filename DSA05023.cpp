#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

string s;

void process(){
    cin >> s;
    int n = s.size();
    s = " " + s;

    int a[n + 6] = {0};

    for(int i = 1; i <= n; i++){
        a[i] = s[i] - '0';
    }

    long long sum = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i + 1; j++){
            long long temp = 0;
            for(int k = j; k <= j + i - 1; k++){
                temp = temp * 10 + a[k];
            }
            sum += temp;
        }
    }

    cout << sum;
    cout << "\n";
}

int main(){
    int T = 1;
    cin >> T;

    while(T--){
        process();
    }
}












