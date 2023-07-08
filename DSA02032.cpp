#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int n, x, mark;

int a[1006];
vector<vector<int>> s;

void Try(int sum, int start, vector<int> save){
    if(sum == 0){
        mark++;
        s.push_back(save);
        return;
    }

    if(sum < 0){
        return;
    }

    for(int i = start; i <= n; i++){
        save.push_back(a[i]);
        Try(sum - a[i], i, save);
        save.pop_back();
    }
}

void process(){
    mark = 0;
    cin >> n >> x;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    sort(a + 1, a + 1 + n);

    vector<int> save;
    Try(x, 1, save);
    if(mark == 0){
        cout << "-1";
    }
    else{
        cout << mark << " ";
        for(int i = 0; i < mark; i++){
            int m = s[i].size();
            cout << "{";
            for(int j = 0; j < m; j++){
                cout << s[i][j];
                if(j != m - 1){
                    cout << " ";
                }
            }
            cout << "} ";
        }

        s.clear();
    }
    cout << "\n";
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        process();
    }
}
