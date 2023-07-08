#include <bits/stdc++.h>
#define M 1000006
using namespace std;

int n, k;
int a[1006][1006];
int b[M];
vector<string> save;
int m[M];

void Try(int i){
    if(i == n + 1){
        int sum = 0;
        for(int j = 1; j <= n; j++){
            sum += a[j][b[j]];
        }
        if(sum == k){
            string res = "";
            for(int j = 1; j <= n; j++){
                res += (b[j] + '0');
                res += ' ';
            }
            save.push_back(res);
        }
        return;
    }

    for(int j = 1; j <= n; j++){
        if(m[j] == 0){
            b[i] = j;
            m[j] = 1;
            Try(i + 1);
            m[j] = 0;
        }
    }
}

void process(){
    cin >> n >> k;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }

    Try(1);

    cout << save.size() << "\n";
    for(auto i : save){
        cout << i << "\n";
    }

}

int main()
{
    int T = 1;
    //cin >> T;
    while(T--){
        process();
    }
}
