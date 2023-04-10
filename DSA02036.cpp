#include <bits/stdc++.h>
using namespace std;

int s, p, n, dem, beg, en, m;

int mark[206];
int a[106];
vector<int> save;
vector<vector<int>> savee(106);

void sieve(){
    mark[0] = mark[1] = 1;

    for(int i = 2; i * i <= 206; i++){
        if(mark[i] == 0){
            for(int j = i * i; j <= 206; j += i){
                mark[j] = 1;
            }
        }

    }

    for(int i = 2; i <= 206; i++){
        if(mark[i] == 0){
            save.push_back(i);
        }
    }
}

void Try(int i){
    if(i == n + 1){
        int sum = 0;
        for(int j = 1; j <= n; j++){
            //cout << save[a[j]] << " ";
            sum += save[a[j]];
        }
        if(sum == s){
            for(int j = 1; j <= n; j++){
                savee[dem].push_back(save[a[j]]);
            }
            dem++;
        }
        return;
    }

    for(int j = a[i - 1] + 1; j <= en - n + i; j++){
        a[i] = j;
        Try(i + 1);
    }
}

void process(){
    cin >> n >> p >> s;

    for(int i = 0; i < savee.size(); i++){
        savee[i].clear();
    }
    beg = -1;
    en = -1;

    for(int i = 0; i < save.size(); i++){
        if(save[i] > p){
            beg = i;
            break;
        }
    }

    for(int i = save.size() - 1; i >= 0; i--){
        if(save[i] <= s){
            en = i;
            break;
        }
    }

    //cout << beg << " " << en << "\n";
    m = en - beg + 1;

    if(n > m){
        cout << "0\n";
        return;
    }

    a[0] = beg - 1;
    dem = 0;
    Try(1);

    cout << dem << "\n";
    for(int i = 0; i < dem;i++){
        for(int j = 0; j < savee[i].size(); j++){
            cout << savee[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";
}

int main()
{
    int T;
    cin >> T;
    sieve();
    while(T--){
        process();
    }
}
