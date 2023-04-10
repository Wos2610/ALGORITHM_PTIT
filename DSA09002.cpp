#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int n;

int change(string s){
    int n = s.size();
    int res = 0;
    for(int i = 0; i < n; i++){
        res = res * 10 + s[i] - '0';
    }
    return res;
}

void process(){
    cin >> n;
    cin.ignore();
    string s;
    vector<vector<int>> save(n + 6);

    for(int i = 1; i <= n; i++){
        getline(cin, s);
        int m = s.size();
        int temp1 = 0;
        string tmp = "";
        for(int j = 0; j < m; j++){
            if(s[j] == ' '){
                save[i].push_back(change(tmp));
                tmp = "";
            }
            else{
                tmp += s[j];
            }
        }
        save[i].push_back(change(tmp));
    }

    for(int i = 1; i <= n; i++){
        sort(save[i].begin(), save[i].end());
    }

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < save[i].size(); j++){
            if(save[i][j] > i){
                 cout << i << " " << save[i][j] << "\n";
            }
        }
    }

    cout << "\n";
}

int main(){
    int T;
    T = 1;

    while(T--){
        process();
    }
}










