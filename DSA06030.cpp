#include<bits/stdc++.h>
#define M 1000006
using namespace std;

int a[M], l[M], r[M];
vector<int> save;
int n, d, k, m;
long long x;

void process(){
    cin >> n;
    vector<vector<int>> save(n + 6);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int d = 0;
    for(int i = 1; i < n; i++){
        int mark = 0;
        for(int j = 0; j < n - i; j++){
            if(a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
                mark = 1;
            }
        }
        if(mark){
            d++;
            for(int j = 0; j < n; j++){
                save[i].push_back(a[j]);
            }
        }
    }

    for(int i = d; i >= 1; i--){
        cout << "Buoc " << i  << ": ";
        for(int j = 0; j < save[i].size(); j++){
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







