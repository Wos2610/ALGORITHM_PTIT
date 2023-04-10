#include <bits/stdc++.h>
using namespace std;

int n, k, dem;
int a[106], b[106][106], mark[106];
vector<string> save;
void Try(int i){
    if(i == n + 1){
        int sum = 0;
        int index = 1;
        for(int j = 1; j <= n; j++){
            sum += b[index][a[j]];
            index++;
        }
        if(sum == k){
            string temp = "";
            for(int j = 1; j <= n; j++){
                temp += (char)(a[j] + '0');
                temp += ' ';
            }
            save.push_back(temp);
        }
        return;
    }

    for(int j = 1; j <= n; j++){
        if(mark[j] == 0){
            a[i] = j;
            mark[j] = 1;
            Try(i + 1);
            mark[j] = 0;
        }
    }
}

void process(){
    cin >> n >> k;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> b[i][j];
        }
    }

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
