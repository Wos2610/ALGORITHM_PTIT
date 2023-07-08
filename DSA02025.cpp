#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int n, res;
int c[16][16];
int mark[M], a[M];
string x;


int tinh(string s1, string s2){
    int m1 = s1.size();
    int m2 = s2.size();

    int m[30] = {0};
    for(int i = 0; i < m1; i++){
        m[s1[i] - 'A']++;
    }
    for(int i = 0; i < m2; i++){
        m[s2[i] - 'A']++;
    }

    int dem = 0;
    for(int i = 0; i < 26; i++){
        if(m[i] == 2){
            dem++;
        }
    }
    return dem;
}

void Try(int i){
    if(i == n + 1){
        int temp = 0;
        for(int j = 2; j <= n; j++){
            temp += c[a[j - 1]][a[j]];
        }
        res = min(res, temp);
        return;
    }

    for(int j = 1; j <= n; j++){
        if(mark[j] == 0){
            a[i] = j;
            mark[j] = 1;
            Try(i + 1);
            mark[j] = 0;
        }
    }
}

void process(){
    cin >> n;
    vector<string> s;
    s.push_back("");
    for(int i = 1; i <= n; i++){
        cin >> x;
        s.push_back(x);
        mark[i] = 0;
    }

    res = 9999999;

    for(int i = 1; i < n; i++){
        for(int j = i + 1; j <= n; j++){
            c[i][j] = tinh(s[i], s[j]);
            c[j][i] = c[i][j];
        }
    }

    Try(1);

    cout << res;
    cout << "\n";
}

int main(){
    int T = 1;
    //cin >> T;

    while(T--){
        process();
    }
}











