#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<map>
#define M 1000006

using namespace std;

int a[1006][1006];
int n, s;
int mark[1006], d[1006], truoc[1006];
vector<int> save;

int main() {
    cin >> n >> s;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    save.push_back(s);
    mark[s] = 1;
    for (int i = 1; i <= n; i++) {
        if (i == s) {
            d[i] = 0;
        }
        else {
            if (a[s][i] == 0) {
                d[i] = M;
            }
            else {
                d[i] = a[s][i];
            }
        }
        truoc[i] = s;
    }

    while (save.size() < n) {
        int minn = M;
        int u = 0;
        for (int i = 1; i <= n; i++) {
            if (mark[i] == 0 && d[i] > 0 && d[i] < minn) {
                u = i;
                minn = d[i];
            }
        }
        save.push_back(u);
        mark[u] = 1;
        for (int i = 1; i <= n; i++) {
            if (a[u][i] != 0) {
                if (d[i] > d[u] + a[u][i]) {
                    d[i] = d[u] + a[u][i];
                    truoc[i] = u;
                }
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if(d[i] != M){
            cout <<"K/c " << s << " -> " << i << " = " << d[i] << ";  ";
            int temp = i;
            if(i == s){
                cout << i << " <- ";
            }
            while(temp != s){
                cout << temp << " <- ";
                temp = truoc[temp];
            }
            cout << s;
        }
        else{
            cout <<"K/c " << s << " -> " << i << " = INF" << ";";
        }
        cout << "\n";
    }
}
