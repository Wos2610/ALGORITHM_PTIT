#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int n;
int a[M];

void process(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int res = 0;
    int temp = 0;
    for(int i = 0; i < n; i++){
        temp += a[i];
        res = max(res, temp);
        if(temp < 0){
            temp = 0;
        }
    }

    cout << res << "\n";

}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}









