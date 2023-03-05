#include<bits/stdc++.h>

using namespace std;

int a[1006], b[1006], mark[1006];
vector<int> save;
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

    int x;
    for(int i = 1; i <= n; i++){
        cin >> x;
        mark[x]++;
        if(mark[x] == 1){
            save.push_back(x);
        }
    }

    n = save.size();

    sort(save.begin(), save.begin() + n);

    Try(1);

    cout << "\n";
}

int main(){
    process();
}



