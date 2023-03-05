#include<bits/stdc++.h>

using namespace std;

int a[1006], mark[1006];
int n, x, d, k;

void process(){
    cin >> n >> k;

    map<int, int> m;
    for(int i = 0; i < n; i++){
        cin >> x;
        m[x]++;
    }

    sort(a, a + n);


    d = 0;

    for(auto i : m){
        if(i.first * 2 == k){
            d += i.second * (i.second - 1);
        }
        else{
            d += i.second * m[k - i.first];
        }
    }

    cout << d/2;
    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}





