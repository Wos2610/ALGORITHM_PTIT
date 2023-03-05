#include<bits/stdc++.h>
#define M 1000006
using namespace std;

int a[M], m[M], r[M];
vector<int> save;
int n;

void process(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n);

    int minn = 9999999;

    for(int i = 0; i < n - 1; i++){
        minn = min(minn, a[i + 1] - a[i]);
    }

    cout << minn;
    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}







