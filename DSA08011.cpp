#include<bits/stdc++.h>
#define M 100006
#define MOD 1000000007

using namespace std;

string s, t;
int n;
string a[100000];

void process() {
    cin >> n;
    cin >> s >> t;

    set<string> d;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        d.insert(a[i]);
    }

    queue<pair<string, int>> q;
    q.push({s, 1});

    while(q.size()){
        string x = q.front().first;
        int y = q.front().second;
        q.pop();
        d.erase(x);
        //cout << x << " " << y << "\n";

        if(x == t){
            cout << y << "\n";
            return;
        }
        int l = x.size();

        string temp = "";
        for(int i = 0; i < l; i++){
            temp = x;
            for(int j = 0; j < 26; j++){
                temp[i] = 'A' + j;
                //cout << temp << " ";
                if(d.find(temp) != d.end()){
                    d.erase(temp);
                    q.push({temp, y + 1});
                }
            }
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



