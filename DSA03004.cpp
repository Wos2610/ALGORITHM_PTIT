#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

string s;
int n;
int a[M];

void process(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n);
    long long min1 = 0;
    long long min2 = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            min1 = min1 * 10 + a[i];
        }
        else{
            min2 = min2 * 10 + a[i];
        }
    }

    cout << min1 + min2;
    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}









