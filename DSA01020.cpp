#include<bits/stdc++.h>

using namespace std;

int a[1006], mark[1006];
int n, k;


void process(){
    string s;
    cin >> s;

    s = " " + s;

    int n = s.size();
    int m = n - 1;
    while(m > 0 && s[m] == '0'){
        s[m] = '1';
        m--;
    }

    if(m == 0){
        for(int i = 1; i < n; i++){
            cout << "1";
        }
    }
    else{
        s[m] = '0';
        for(int i = 1; i < n; i++){
            cout << s[i];
        }
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



