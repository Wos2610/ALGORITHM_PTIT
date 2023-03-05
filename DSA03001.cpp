#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

string s;
int n, k;
int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

void process(){
    cin >> n;

    int d = 0;
    int temp = 0;
    for(int i = 9; i >= 0; i--){
        temp = n/a[i];
        d += n/a[i];
        n = n - temp * a[i];
        if(n == 0){
            break;
        }
    }

    cout << d << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}









