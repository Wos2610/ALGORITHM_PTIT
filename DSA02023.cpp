#include<bits/stdc++.h>

using namespace std;

int a[1006];
vector<string> save;
int n, k, d;

void Try(int i){
    if(i == k + 1){
        for(int j = 1; j <= k; j++){
            cout << save[a[j] - 1] << " ";
        }
        cout << "\n";
        return;
    }

    for(int j = a[i - 1] + 1; j <= n - k + i; j++){
        a[i] = j;
        Try(i + 1);
    }
}

void process(){
    cin >> n >> k;
    string x;
    map<string, int> mark;

    for(int i = 1; i <= n; i++){
        cin >> x;
        if(mark[x] == 0){
            save.push_back(x);
        }
        mark[x]++;
    }

    n = save.size();

    sort(save.begin(), save.begin() + n);

    Try(1);
}

int main(){
    int T = 1;
    while(T--){
        process();
    }
}




