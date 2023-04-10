#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

void process(){
    cin >> v >> e;

    for(int i = 1; i <= v; i++){
        save[i].clear();
    }

    for(int i = 0; i < e; i++){
        cin >> x >> y;
        save[x].push_back(y);
        save[y].push_back(x);
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











