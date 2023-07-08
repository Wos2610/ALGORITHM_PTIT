#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int m, n;
void process(){
    cin >> m;

    long long a[m + 6] = {0};
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }

    long long dem = 0;
    for(int i = 0; i < m; i++){
        for(int j = i + 1; j < m; j++){
            if(a[j] < a[i]){
                dem++;
            }
        }
    }

    cout << dem;
    cout << "\n";
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        process();
    }
}
