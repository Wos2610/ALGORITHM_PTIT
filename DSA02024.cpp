#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

string s;
int n, k;
int a[M];
vector<vector<int>> save;
vector<int> temp;
vector<string> res;

void Try(int i){
    if(i == n){
        return;
    }

    for(int j = i + 1; j <= n; j++){
        if(a[j] > a[i]){
           temp.push_back(a[j]);
           if(temp.size() > 1){
                save.push_back(temp);
           }
           Try(j);
           temp.erase(temp.end() - 1, temp.end());
        }
    }
}

void process(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    Try(0);


    for(int i = 0; i < save.size(); i++){
        string tmp = "";
        for(int j = 0; j < save[i].size(); j++){
            tmp += to_string(save[i][j]);
            tmp += " ";
        }
        res.push_back(tmp);
    }

    sort(res.begin(), res.end());

    for(int i = 0; i < res.size(); i++){
        cout << res[i] << "\n";
    }
}

int main(){
    int T;
    T = 1;
    while(T--){
        process();
    }
}









