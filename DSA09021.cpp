#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int n, x;

void process(){
    cin >> n;
    vector<vector<int>> save(n + 6);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> x;
            if(x){
                save[i].push_back(j);
            }
        }
    }

    for(int i = 1; i <= n; i++){
        sort(save[i].begin(), save[i].end());
    }

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < save[i].size(); j++){
            cout << save[i][j] << " ";
        }
        cout << "\n";
    }
}

int main(){
    int T;
    T = 1;

    while(T--){
        process();
    }
}










