#include<bits/stdc++.h>
#define M 100006
#define MOD 1000000007

using namespace std;

int mark[M];
int s, t;

void sieve(){
    mark[0] = mark[1] = 1;

    for(int i = 2; i * i <= M; i++){
        if(mark[i] == 0){
            for(int j = i * i; j <= M; j += i){
                mark[j] = 1;
            }
        }
    }
}
void process() {
    cin >> s >> t;

    int d[100000] = {0};
    queue<pair<int, int>> q;
    q.push({s, 0});
    d[s] = 1;

    while(q.size()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if(x == t){
            cout << y << "\n";
            return;
        }
        int c[10] = {0};

        int temp = x;
        int i = 1;
        while(temp > 0){
            c[i] = temp % 10;
            temp /= 10;
            i++;
        }

        // 4 3 2 1
        int k = 0;
        for(int i = 0; i <= 9; i++){
            k = x - c[1] + i;
            if(d[k] == 0 && mark[k] == 0){
                q.push({k, y + 1});
                d[k] = 1;
            }
        }

        for(int i = 0; i <= 9; i++){
            k = x - c[2] * 10 + i * 10;
            if(d[k] == 0 && mark[k] == 0){
                q.push({k, y + 1});
                d[k] = 1;
            }
        }

        for(int i = 0; i <= 9; i++){
            k = x - c[3] * 100 + i * 100;
            if(d[k] == 0 && mark[k] == 0){
                q.push({k, y + 1});
                d[k] = 1;
            }
        }

        for(int i = 1; i <= 9; i++){
            k = x - c[4] * 1000 + i * 1000;
            if(d[k] == 0 && mark[k] == 0){
                q.push({k, y + 1});
                d[k] = 1;
            }
        }
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T = 1;
    cin >> T;

    sieve();
    while (T--) {
        process();
    }
    return 0;
}



