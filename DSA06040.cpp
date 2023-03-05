#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

long long a[M], b[M];
vector<int> save;
long long m, n1, n2, n3, k, x;
string s;

void process(){
    cin >> n1 >> n2 >> n3;

    int mark = 0;
    map<long long, int> m1, m2, m3;

    for(int i = 0; i < n1; i++){
        cin >> x;
        m1[x]++;
    }

    for(int i = 0; i < n2; i++){
        cin >> x;
        m2[x]++;
    }

    for(int i = 0; i < n3; i++){
        cin >> x;
        m3[x]++;
    }

    for(auto i : m1){
        int k1 = min(i.second, m2[i.first]);
        int k2 = min(m2[i.first], m3[i.first]);
        int k = min(k1, k2);
        if(k != 0){
            for(int j = 0; j < k; j++){
                cout << i.first << " ";
                mark = 1;
            }
        }
    }

    if(mark == 0){
        cout << "-1";
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








