#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int n;


void process(){
    cin >> n;

    int mark = 0;
    for(int i = 0; i <= n/4; i++){
        if((n - i * 4) % 7 == 0){
            for(int j = 0; j < i; j++){
                cout << 4;
            }

            for(int j = 0; j < (n - i * 4) / 7; j++){
                cout << 7;
            }
            mark = 1;
            break;
        }
    }
    if(mark == 0){
        cout << -1;
    }
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
