#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

string s;
int n, k;
int a[M], b[M];

void process(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b, b + n);

    int mark = 0;
    for(int i = 0; i < n; i++){
        if(a[i] != b[i] && a[i] != b[n - i - 1]){
            mark = 1;
        }
    }

    if(mark){
        cout << "No\n";
    }
    else{
        cout << "Yes\n";
    }
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}









