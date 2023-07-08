#include <bits/stdc++.h>
#define M 1000006
#define MOD 123456789
using namespace std;

int n;
int a[M], b[M];
vector<vector<int>> save;

void Try(int i, int k, int sum){
    if(i > k){
        if(sum % 2){
            vector<int> temp;
            for(int i = 1; i <= k; i++){
                temp.push_back(b[a[i]]);
            }
            save.push_back(temp);
        }
        return;
    }
    for(int j = a[i - 1] + 1; j <= n - k + i; j++){
        a[i] = j;
        Try(i + 1, k, sum + b[a[i]]);
    }

}


void process(){
    cin >> n;
    save.clear();
    for(int i = 1; i <= n; i++){
        cin >> b[i];
        a[i] = 0;
    }

    sort(b + 1, b + 1 + n, greater<int>());

    for(int i = 1; i <= n; i++){
        Try(1, i, 0);
    }

    sort(save.begin(), save.end());

    for(auto i : save){
        for(auto j : i){
            cout << j << " ";
        }
        cout << "\n";
    }

}

int main()
{
    int T;
    cin >> T;
    while(T--){
        process();
    }
}
