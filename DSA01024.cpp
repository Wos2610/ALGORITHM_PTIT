#include<bits/stdc++.h>

using namespace std;

int n, k, d;
string b[1006];
vector<string> a;
int c[1006];

void Try(int i){
    if(i == k + 1){
        for(int i = 1; i <= k; i++){
            cout << a[c[i] - 1] << " ";
        }
        cout << "\n";
        return;
    }

    for(int j = c[i - 1] + 1; j <= n - k + i; j++){
        c[i] = j;
        Try(i + 1);
    }
}

void process(){
    cin >> n >> k;
    map<string, int> m;

    for(int i = 1; i <= n; i++){
        cin >> b[i];
        m[b[i]]++;
        if(m[b[i]] == 1){
            a.push_back(b[i]);
        }
    }

    n = a.size();
    sort(a.begin(), a.begin() + n);

    Try(1);

    cout << "\n";
}

int main(){
    process();
}




