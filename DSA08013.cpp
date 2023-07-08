#include<bits/stdc++.h>
#define M 100006
#define MOD 1000000007

using namespace std;

int n, a, b, c , d;
char s[1006][1006];

struct Point{
    int x;
    int y;
    int d;
};

void process() {
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> s[i][j];
        }
    }

    cin >> a >> b >> c >> d;
    a++;
    b++;
    c++;
    d++;

    queue<Point> q;
    map<pair<int, int>, int> m;
    q.push({a, b, 0});
    m[{a, b}] = 1;
    int mark = 0;

    while(q.size()){
        int i = q.front().x;
        int j = q.front().y;
        int k = q.front().d;
        q.pop();
        if(i == c && j == d){
            mark = 1;
            cout << k << "\n";
            return;
        }

        for(int p = j; p >= 1; p--){
            if(s[i][p] == '.' && m[{i, p}] == 0){
                q.push({i, p, k + 1});
                m[{i, p}] = 1;
            }
            else if(s[i][p] == 'X'){
                break;
            }
        }

        for(int p = j + 1; p <= n; p++){
            if(s[i][p] == '.' && m[{i, p}] == 0){
                q.push({i, p, k + 1});
                m[{i, p}] = 1;
            }
            else if(s[i][p] == 'X'){
                break;
            }
        }

        for(int p = i; p >= 1; p--){
            if(s[p][j] == '.' && m[{p, j}] == 0){
                q.push({p, j, k + 1});
                m[{p, j}] = 1;
            }
            else if(s[p][j] == 'X'){
                break;
            }
        }

        for(int p = i + 1; p <= n; p++){
            if(s[p][j] == '.' && m[{p, j}] == 0){
                q.push({p, j, k + 1});
                m[{p, j}] = 1;
            }
            else if(s[p][j] == 'X'){
                break;
            }
        }
    }

    if(mark == 0){
        cout << "0\n";
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T = 1;
    cin >> T;

    while (T--) {
        process();
    }
    return 0;
}





