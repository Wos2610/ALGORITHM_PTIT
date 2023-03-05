#include<bits/stdc++.h>

using namespace std;

int a[1006];
int n;

void process(){
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    int m = n - 1;
    while(m > 0 && a[m] >= a[m + 1]){
        m--;
    }

    if(m == 0){
        for(int i = 1; i <= n; i++){
            cout << i << " ";
        }
    }
    else{
        int k = n;
        while(a[k] <= a[m]){
            k--;
        }
        swap(a[k], a[m]);
        sort(a + 1 + m + 1, a + n + 1);

        for(int i = 1; i <= n; i++){
            cout << a[i] << " ";
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
