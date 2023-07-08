#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

string s;
int n;
vector<string> save;
int a[M];

void Try(int i, int k, string str){
    if(i > k){
        save.push_back(str);
        return;
    }

    for(int j = a[i - 1] + 1; j <= n - k + i; j++){
        a[i] = j;
        Try(i + 1, k, str + s[j]);
    }
}

void process(){
    cin >> n >> s;
    s = " " + s;

    save.clear();
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }

    for(int i = 1; i <= n; i++){
        Try(1, i, "");
    }

    sort(save.begin(), save.end());
    for(auto i : save){
        cout << i << " ";
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











