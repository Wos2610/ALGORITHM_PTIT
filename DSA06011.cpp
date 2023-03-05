#include<bits/stdc++.h>

using namespace std;

int a[1006], mark[1006];
int n, d, k;
long long x;

void process(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n);

    int s = 99999999;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(abs(a[i] + a[j]) < abs(s)){
                s = a[i] + a[j];
            }
        }
    }

    cout << s;

    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}





