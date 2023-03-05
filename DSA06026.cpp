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

    int k = 1;
    for(int i = 1; i < n; i++){
        int mark = 0;
		for(int j = 0; j < n - i; j++){
			if(a[j] > a[j + 1]){
				swap(a[j], a[j + 1]);
				mark = 1;
			}
		}

        if(mark){
            cout << "Buoc " << k << ": ";
            for(int j = 0; j < n; j++){
                cout << a[j] << " ";
            }
            cout << "\n";
            k++;
        }
    }
}

int main(){
    int T;
    T = 1;
    while(T--){
        process();
    }
}






