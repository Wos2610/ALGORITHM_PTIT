#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

string s;
int d;

void process(){
    cin >> d;
    cin >> s;

    int n = s.size();

    int c[30] = {0};
    for(int i = 0; i < n; i++){
        c[s[i] - 'A']++;
    }

    sort(c, c + 26, greater<int>());

    for(int i = 0; i < 26; i++){
        for(int j = 0; j < c[i]; j++){
            if(i + j * d > n){
                cout << "-1\n";
                return;
            }

        }
    }
    cout << "1\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}








