#include<bits/stdc++.h>

using namespace std;

int a[1006], mark[1006];
vector<string> save;
int n, k, d;
char c;

int check(){
    for(int i = 2; i <= c - 'A' + 1; i++){
        if(a[i] == 0 || a[i] == 4){
            if(a[i - 1] != 0 && a[i - 1] != 4 && a[i + 1] != 0 && a[i + 1] != 4){
                return 0;
            }
        }
    }
    return 1;
}

void Try(int i){
    if(i == c - 'A' + 2){
        if(check()){
            for(int j = 1; j <= c - 'A' + 1; j++){
                cout << (char)(a[j] + 'A');
            }
            cout << "\n";
        }
        return;
    }

    for(int j = 0; j <= c - 'A'; j++){
        if(!mark[j]){
            a[i] = j;
            mark[j] = 1;
            Try(i + 1);
            mark[j] = 0;
        }
    }
}

void process(){
    cin >> c;
    Try(1);
}

int main(){
    int T = 1;
    while(T--){
        process();
    }
}




