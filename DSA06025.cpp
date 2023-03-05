#include<bits/stdc++.h>
#define M 1000006
using namespace std;

int c[M], l[M], r[M];
vector<int> save;
int n, d, k, m;
long long x;

void process(){
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq1, pq2;

    int k = 0;

    for(int i = 1; i <= n; i++){
        cin >> x;
        cout << "Buoc " << k << ": ";
        pq1.push(x);

        pq2 = pq1;

        while(pq2.size() != 0){
            cout << pq2.top() << " ";
            pq2.pop();
        }
        k++;
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






