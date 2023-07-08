#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int n;

void change(int a){
    string res = "";
    while(a > 0){
        if(a % 2 == 0){
            res = "0" + res;
        }
        else{
            res = "1" + res;
            a--;
        }
        a /= 2;
    }

    cout << res << " ";
}
void process(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        change(i);
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










