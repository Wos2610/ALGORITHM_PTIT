#include<bits/stdc++.h>

using namespace std;

int a[1006];
vector<string> save;
int n, k, d;
char c;

void Try(int i){
    if(i == k + 1){
        for(int j = 1; j <= k; j++){
            cout << (char)(a[j] + 'A');
        }
        cout << "\n";
        return;
    }

    for(int j = a[i - 1]; j <= c - 'A'; j++){
        a[i] = j;
        Try(i + 1);
    }
}

void process(){
    cin >> c >> k;

    Try(1);
}

int main(){
    int T = 1;
    while(T--){
        process();
    }
}




