#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int n;
int a[M];

void process(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int res = 0;
    for(int i = 0; i < n - 1; i++){
        int temp = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[temp]){
                temp = j;
            }
        }
        if(temp != i){
            res++;
            swap(a[i], a[temp]);
        }
    }

    cout << res << "\n";

}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}









