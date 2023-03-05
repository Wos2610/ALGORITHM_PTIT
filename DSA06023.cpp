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

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[i]){
                swap(a[i], a[j]);
            }
        }
        cout << "Buoc " << (i + 1) << ": ";
        for(int j = 0; j < n; j++){
            cout << a[j] << " ";
        }
        cout << "\n";
    }
}

int main(){
    int T;
    T = 1;
    while(T--){
        process();
    }
}






