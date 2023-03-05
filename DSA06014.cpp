#include<bits/stdc++.h>
#define M 1000006
using namespace std;

int a[1006], mark[1000006];
vector<int> save;
int n, d, k, m;
long long x;

void sieve(){
    mark[0] = mark[1] = 1;
    for(int i = 2; i * i <= M; i++){
        if(!mark[i]){
            for(int j = i * i; j <= M; j += i){
                mark[j] = 1;
            }
        }
    }

    for(int i = 2; i <= M; i++){
        if(!mark[i]){
            save.push_back(i);
        }
    }
}
void process(){
    cin >> n;
    m = 0;
    for(auto i : save){
        if(i > n){
            break;
        }
        if(!mark[n - i]){
            m = 1;
            cout << i << " " << n - i;
            break;
        }
    }

    if(!m){
        cout << "-1";
    }

    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    sieve();
    while(T--){
        process();
    }
}





