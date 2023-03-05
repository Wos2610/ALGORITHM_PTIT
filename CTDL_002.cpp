#include<bits/stdc++.h>

using namespace std;

int d, n, k;
int a[1000006], b[1000006];

void Try(int i){
    if(i == n + 1){
        int sum = 0;
        for(int j = 1; j <= n; j++){
            sum += b[j] * a[j];
        }
        if(sum == k){
            d++;
            for(int j = 1; j <= n; j++){
                if(b[j]){
                    cout << a[j] << " ";
                }
            }
            cout << "\n";
        }
        return;
    }

    for(int j = 0; j <= 1; j++){
        b[i] = j;
        Try(i + 1);
    }
}


int main(){
    cin >> n >> k;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    Try(1);

    cout << d;

}
