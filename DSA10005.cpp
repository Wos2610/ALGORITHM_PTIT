#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int v, e, x , y;


void process(){
    cin >> v >> e;

    int in[v + 6] = {0};
    int out[v + 6] = {0};

    for(int i = 0; i < e; i++){
        cin >> x >> y;
        out[x]++;
        in[y]++;
    }

    int mark = 1;
    for(int i = 1; i <= v; i++){
        if(in[i] != out[i]){
            mark = 0;
            break;
        }
    }

    cout << mark;

    cout << "\n";
}

int main(){
    int T;
    cin >> T;

    while(T--){
        process();
    }
}











