#include <bits/stdc++.h>
using namespace std;

int n, x, y, z;

void process(){
    cin >> n >> x >> y >> z;

    int f[n + 6] = {0};

    for(int i = 1; i <= n + 1; i++){
        f[i] = f[i - 1] + x;
        if(i % 2 == 0){
            f[i] = min(f[i], f[i/2] + z);
        }
        f[i - 1] = min(f[i - 1], f[i] + y);
    }

    cout << f[n];
    cout << "\n";
}

int main()
{
    int T ;
    cin >> T;
    while(T--){
        process();
    }
}
