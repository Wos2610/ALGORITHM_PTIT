#include<bits/stdc++.h>
#define M 1000006
using namespace std;

int a[M], l[M], r[M];
vector<int> save;
int n, d, k, m;
long long x;

void process(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<vector<int>> save(n + 6);

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[i]){
                swap(a[i], a[j]);
            }
        }
        for(int j = 0; j < n; j++){
            save[i].push_back(a[j]);
        }
    }

    for(int i = n - 2; i >= 0; i--){
        cout << "Buoc " << i + 1 << ": ";
        for(int j = 0; j < n; j++){
            cout << save[i][j] << " ";
        }
        cout << "\n";
    }

}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}







