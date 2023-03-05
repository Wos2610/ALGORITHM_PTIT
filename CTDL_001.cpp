#include<bits/stdc++.h>

using namespace std;

int n;

int check(string s){
    for(int i = 0; i < n/2; i++){
        if(s[i] != s[n - i - 1]){
            return 0;
        }
    }
    return 1;
}

string s;

void Try(int i){
    if(i == n){
        if(check(s)){
            for(int j = 0; j < n; j++){
                cout << s[j] << " ";
            }
            cout << "\n";
        }
        return;
    }

    for(int j = 0; j <= 1; j++){
        s[i] = j + '0';
        Try(i + 1);
    }
}


int main(){
    cin >> n;
    s.resize(n);
    Try(0);
}
