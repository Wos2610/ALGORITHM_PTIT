#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int n;
string s;
vector<string> a;

void process(){
    cin >> s;
    n = s.size();

    string gray = "";
    gray += s[0];

    for(int i = 1; i < n; i++){
        if(s[i - 1] != s[i]){
            gray += '1';
        }
        else{
            gray += '0';
        }
    }

    cout << gray;
    cout << "\n";
}

int main(){
    int T;
    cin >> T;

    while(T--){
        process();
    }
}











