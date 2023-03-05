#include<bits/stdc++.h>

using namespace std;

int a[1006], mark[1006];
int n, x, y;

void process(){
    cin >> n;

    vector<int> save;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(!mark[a[i]]){
            save.push_back(a[i]);
        }
        mark[a[i]]++;

    }

    for(int i = 0; i < save.size(); i++){
        cout << save[i] << " ";
    }
}

int main(){
    int T;
    T = 1;
    while(T--){
        process();
    }
}





