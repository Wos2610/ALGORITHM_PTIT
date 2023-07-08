#include <bits/stdc++.h>
#define M 206

using namespace std;

int s, p, n, k, l;
int m[M];
vector<int> save;
void sieve(){
    m[0] = m[1] = 1;

    for(int i = 2; i <= sqrt(M); i++){
        if(m[i] == 0){
            for(int j = i * i; j <= M; j += i){
                m[j] = 1;
            }
        }
    }
}

int a[16];
vector<vector<int>> sa(1006);
int dem = 0;

void Try(int i){
    if(i == n + 1){
        int sum = 0;
        for(int j = 1; j <= n; j++){
            sum += save[a[j]];
        }
        if(sum == s){
            for(int j = 1; j <= n; j++){
                sa[dem].push_back(save[a[j]]);
            }
            dem++;
        }
        return;
    }

    for(int j = a[i - 1] + 1; j <= l - n + i; j++){
        a[i] = j;
        Try(i + 1);
    }
}

void process(){
    cin >> n >> p >> s;

    dem = 0;

    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
    k = upper_bound(save.begin(), save.end(), p) - save.begin();
    l = lower_bound(save.begin(), save.end(), s) - save.begin();

    //cout << k << " " << l << "\n";
    if(l - k + 1 < n){
        cout << "0\n";
        return;
    }
    a[0] = k - 1;
    Try(1);

    sort(sa.begin(), sa.begin() + dem);

    cout << dem << "\n";
    for(int i = 0; i < dem; i++){
        for(int j = 0; j < n; j++){
            cout << sa[i][j] << " ";
        }
        cout << "\n";
    }

    for(int i = 0; i < dem; i++){
        sa[i].clear();
    }

}

int main()
{
    int T;
    cin >> T;
    sieve();

    for(int i = 2; i <= M; i++){
        if(m[i] == 0) save.push_back(i);
    }

    while(T--){
        process();
    }
}
