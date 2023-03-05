#include<bits/stdc++.h>
#define M 1000006
using namespace std;

int c[M], l[M], r[M];
vector<int> save;
int n, d, k, m;
long long x;
void Try(int i){
    if(i == n + 1){
        d++;
        return;
    }

    for(int j = 1; j <= n; j++){
        if(!c[j] && !l[i - j + n] && !r[i + j - 1]){
            c[j] = 1;
            l[i - j + n] = 1;
            r[i + j - 1] = 1;
            Try(i + 1);
            c[j] = 0;
            l[i - j + n] = 0;
            r[i + j - 1] = 0;
        }
    }


}
void process(){
    cin >> n;
    d = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            c[i] = 0;
            l[i - j + n] = 0;
            r[i + j - 1] = 0;
        }
    }
    Try(1);
    cout << d << "\n";

}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}






