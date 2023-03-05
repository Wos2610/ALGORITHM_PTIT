#include<bits/stdc++.h>

using namespace std;

int a[1006], b[1006];
int n, k;


void process(){
    cin >> n >> k;
    int mark[1006] = {0};

    for(int i = 1; i <= k; i++){
        cin >> a[i];
        mark[a[i]]++;
    }

    int m = k;

    while(m > 0 && a[m] >= n - k + m){
        m--;
    }

    if(m == 0){
        cout << k;
    }
    else{
        a[m]++;
        for(int i = m + 1; i <= k; i++){
            a[i] = a[i - 1] + 1;
        }

        int d = 0;
        for(int i = 1;i <= k; i++){
            mark[a[i]]++;
        }

        for(auto i : mark){
            if(i == 2){
                d++;
            }
        }
        cout << k - d;
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



