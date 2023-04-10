#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

string s;
int n;
int a[16];
vector<int> save;
int mark[10];

void Try(int i){
    if(i == n + 1){
        if(a[1] != 0){
            cout << a[1];
        }
        for(int j = 2; j <= n; j++){
            cout << a[j];
        }
        cout << "\n";
        return;
    }
    for(int j = 0; j < n; j++){
        if(mark[save[j]] == 0){
            a[i] = save[j];
            mark[save[j]] = 1;
            Try(i + 1);
            mark[save[j]] = 0;
        }
    }
}

void process(){
    cin >> s;
    n = s.size();
    for(int i = 0; i < 10; i++){
        mark[i] = 0;
        a[i] = 0;
    }
    save.clear();

    for(int i = 0; i < n; i++){
        save.push_back(s[i] - '0');
    }
    sort(save.begin(), save.end());
//    for(int i = 0; i < n; i++){
//        cout << save[i];
//    }
    Try(1);

}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}









