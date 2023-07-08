#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

int n;
vector<long long> save;
long long k2[M], k3[M], k5[M];

void ugly(){
    k2[0] = k3[0] = k5[0] = 1;

    for(int i = 1; i <= 10000; i++){
        k2[i] = k2[i - 1] * 2;
        k3[i] = k3[i - 1] * 3;
        k5[i] = k5[i - 1] * 5;
    }

    map<long long, int> m;
    int mark = 0;
    long long temp = 0;
    int dem = 0;
    for(int i = 0; i <= 100; i++){
        for(int j = 0; j <= 100; j++){
            for(int p = 0; p <= 100; p++){
                temp = k5[i] * k3[j] * k2[p];
                if(temp > LLONG_MAX || temp < 0){
                    break;
                }
                if(m[temp] == 0){
                    save.push_back(temp);
                    m[temp] = 1;
                }
            }
        }
    }
}

void process(){
    cin >> n;
    cout << save[n - 1];

    cout << "\n";
}

int main(){
    int T = 1;
    cin >> T;
    ugly();
    sort(save.begin(), save.end());
    while(T--){
        process();
    }
}











