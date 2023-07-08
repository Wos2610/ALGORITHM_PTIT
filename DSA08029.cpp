#include<bits/stdc++.h>
#define M 100006
#define MOD 1000000007

using namespace std;

int a[10], b[10];
string rl(string s){
    string v = s;
    v[1] = s[4];
    v[2] = s[1];
    v[4] = s[5];
    v[5] = s[2];
    return v;
}

string rr(string s){
    string v = s;
    v[2] = s[5];
    v[3] = s[2];
    v[5] = s[6];
    v[6] = s[3];
    return v;
}

void process() {
    string s= " ";
    string t = " ";

    for(int i = 1; i <= 6; i++){
        cin >> a[i];
        s += (a[i] + '0');
    }

    for(int i = 1; i <= 6; i++){
        cin >> b[i];
        t += (b[i] + '0');
    }


    queue<pair<string, int>> q;
    q.push({s, 0});
    map<string, int> m;

    while(q.size()){
        string k = q.front().first;
        int d = q.front().second;
        q.pop();
        m[k] = 1;

        if(k == t){
            cout << d << "\n";
            return;
        }

        string t1 = rl(k);
        if(m[t1] == 0){
            q.push({t1, d + 1});
            m[t1] = 1;
        }

        string t2 = rr(k);
        if(m[t2] == 0){
            q.push({t2, d + 1});
            m[t2] = 1;
        }
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



