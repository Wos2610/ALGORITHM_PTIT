#include<bits/stdc++.h>
#define M 1000006
using namespace std;

int a[M], l[M], r[M];
vector<int> save;
int n, d, k, m;
long long x;

void process(){
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> pq1, pq2;
    vector<vector<int>> save(n + 6);

    for(int i = 0; i < n; i++){
        cin >> a[i];
        pq1.push(a[i]);
        pq2 = pq1;
        while(pq2.size()){
            save[i].push_back(pq2.top());
            pq2.pop();
        }
    }

    for(int i = n - 1; i >= 0; i--){
        cout << "Buoc " << i  << ": ";
        for(int j = 0; j <= i; j++){
            cout << save[i][j] << " ";
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







