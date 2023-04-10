#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[26];
vector<string> save;

void Try(int i){
    if(i == n + 1){
        int f[n + 6] = {0};
        int mark = 0;
        for(int i = 1; i <= n; i++){
            if(a[i] == 0){
                f[i] = f[i - 1] + 1;
                if(f[i] > k){
                    return;
                }
                if(f[i] == k){
                    mark++;
                }
            }
            else{
                f[i] = 0;
            }
        }
        if(mark != 1){
            return;
        }
        string temp = "";
        for(int i = 1; i <= n; i++){
            temp += (char)(a[i] + 'A');
        }
        save.push_back(temp);
        return;
    }

    for(int j = 0; j <= 1; j++){
        a[i] = j;
        Try(i + 1);
    }
}

void process(){
    cin >> n >> k;

    Try(1);

    cout << save.size() << "\n";

    for(int i = 0; i < save.size(); i++){
        cout << save[i] << "\n";
    }
}

int main()
{
    int T = 1;
    //cin >> T;
    while(T--){
        process();
    }
}
