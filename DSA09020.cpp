#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int n;

int change(string s){
    int m = s.size();
    int res = 0;
    for(int i = 0; i < m; i++){
        res = res * 10 + s[i] - '0';
    }
    return res;
}

void process(){
    cin >> n;
    cin.ignore();

    vector<vector<int>> save(n + 6);
    string s;
    for(int i = 1; i <= n; i++){
        getline(cin, s);
        int k = s.size();
        string temp = "";
        for(int j = 0; j < k; j++){
            if(s[j] == ' '){
                save[i].push_back(change(temp));
                temp = "";
            }
            else{
                temp += s[j];
            }
        }
        save[i].push_back(change(temp));
    }

    vector<vector<int>> a(n + 6);

    for(int i = 1; i <= n; i++){
        a[i].resize(n + 6);
        for(int j = 0; j < save[i].size(); j++){
            a[i][save[i][j]] = 1;
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

}

int main(){
    int T;
    T = 1;

    while(T--){
        process();
    }
}










