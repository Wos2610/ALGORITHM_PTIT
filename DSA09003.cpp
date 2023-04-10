#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int v, e, x, y;

void process(){
    cin >> v >> e;

    vector<vector<int>> save(v + 6);

    for(int i = 0; i < e; i++){
        cin >> x >> y;
        save[x].push_back(y);
    }

    for(int i = 1; i <= v; i++){
        sort(save[i].begin(), save[i].end());
    }

    for(int i = 1; i <= v; i++){
        cout << i << ": ";
        for(int j = 0; j < save[i].size(); j++){
            cout << save[i][j] << " ";
        }
        cout << "\n";
    }

}

int main(){
    int T;
    cin >> T;

    while(T--){
        process();
    }
}










