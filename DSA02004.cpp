#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int n, mark;
int a[16][16];

int y[] = {0, 1, -1, 0};
int x[] = {1, 0, 0, -1};
char z[] = {'D', 'R', 'L', 'U'};
map<pair<int, int>, int> m;
vector<string> save;

void Try(int i, int j, string s){
    if(i < 1 || i > n || j < 1 || j > n){
        return;
    }

    if(i == n && j == n){
        save.push_back(s);
        mark = 1;
    }

    for(int k = 0; k < 4; k++){
        int x1 = i + x[k];
        int y1 = j + y[k];
        if(m[{x1, y1}] == 0 && a[x1][y1] == 1){
            m[{x1, y1}] = 1;
            Try(x1, y1, s + z[k]);
            m[{x1, y1}] = 0;
        }
    }
}

void process(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            m[{i, j}] = 0;
            cin >> a[i][j];
        }
    }
    if(a[1][1] == 0){
        cout << "-1\n";
        return;
    }
    mark = 0;
    save.clear();
    m[{1, 1}] = 1;
    Try(1,1, "");
    sort(save.begin(), save.end());
    for(auto i : save){
        cout << i << " ";
    }
    if(mark == 0){
        cout << "-1";
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









