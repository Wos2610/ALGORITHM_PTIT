#include<bits/stdc++.h>
#define M 100006
#define MOD 1000000007

using namespace std;

vector<int> save;
int mark[M] = {0};
int l, r;

void process() {
    cin >> l >> r;

    int k1 = lower_bound(save.begin(), save.end(), l) - save.begin();
    int k2 = lower_bound(save.begin(), save.end(), r) - save.begin();

    if(mark[k2] == 0 || mark[k1] == 0){
        cout << k2 - k1;
    }
    else{
        cout << k2 - k1 + 1;
    }
    cout << "\n";
}

int main() {
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    int T = 1;
    cin >> T;

    queue<int> q;
    for(int i = 0; i <= 5; i++){
        q.push(i);
    }

    while(q.size()){
        int x = q.front();
        q.pop();
        if(x > 100000){
            break;
        }
        save.push_back(x);
        int m[10] = {0};
        int temp = x;
        while(temp > 0){
            m[temp % 10]++;
            temp /= 10;
        }

        for(int i = 0; i <= 5; i++){
            if(x * 10 + i <= 100000 && mark[x * 10 + i] == 0 && m[i] == 0){
                q.push(x * 10 + i);
                mark[x * 10 + i] = 1;
            }
        }

    }
    while (T--) {
        process();
    }
    return 0;
}



