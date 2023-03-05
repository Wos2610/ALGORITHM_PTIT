#include<bits/stdc++.h>
#define M 1000006
using namespace std;

int a[M], b[M];
vector<int> save;
int n, d, k, m;
long long x;

void process(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n);

    if(a[0] == a[n - 1]){
        cout << "-1";
    }
    else{
        cout << a[0] << " ";
        int i = 1;
        while(a[i] == a[0]){
            i++;
        }
        cout << a[i];
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






