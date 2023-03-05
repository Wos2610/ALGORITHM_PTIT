#include<bits/stdc++.h>

using namespace std;

string s;

void sinh(string s){
    int n = s.size();
    int k = n - 1;
    while(k > 0 && s[k] == '1'){
        s[k] = '0';
        k--;
    }

    if(k == 0){
        for(int i = 0; i < n; i++){
            s[i] = '0';
        }
    }
    else{
        s[k] = '1';
    }

    cout << s;
    cout << "\n";
}


int main(){
    int T;
    cin >> T;
    while(T--){
        cin >> s;
        sinh(s);
    }
}
