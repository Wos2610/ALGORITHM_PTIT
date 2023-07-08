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

    string bin = "";
    bin += s[0];

    for(int i = 1; i < n; i++){
        if(s[i] == '0'){
            bin += bin[i - 1];
        }
        else{
            if(bin[i - 1] == '0'){
                bin += '1';
            }
            else{
                bin += '0';
            }
        }
    }

    cout << bin;

    cout << "\n";
}

int main(){
    int T;
    cin >> T;

    while(T--){
        process();
    }
}











