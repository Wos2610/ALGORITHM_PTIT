#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int n;
void Try(int sum, int maxNum, vector<int> save){
    if(sum == 0){
        cout << "(";
        for(int i = 0; i < save.size(); i++){
            cout << save[i];
            if(i == save.size() - 1) cout << ") ";
            else cout << " ";
        }
        return;
    }
    if(sum < 0) return;

    for(int i = min(sum, maxNum); i >= 1; i--){
        save.push_back(i);
        Try(sum - i, i, save);
        save.pop_back();
    }
}

void process(){
    cin >> n;

    vector<int> save;
    Try(n, n, save);

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
