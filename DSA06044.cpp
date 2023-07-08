#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int n, x;
void process(){
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> le;
    priority_queue<int> chan;

    for(int i = 1; i <= n; i++){
        cin >> x;
        if(i % 2 == 1){
            le.push(x);
        }
        else{
            chan.push(x);
        }
    }

    for(int i = 1; i <= n; i++){
        if(i % 2 == 1){
            cout << le.top() << " ";
            le.pop();

        }
        else{
            cout << chan.top() << " ";
            chan.pop();
        }
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
