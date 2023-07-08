#include <bits/stdc++.h>
using namespace std;
#define M 1000006
#define MOD 1000000007

int n;
int a[M];
void process(){
    cin >> n;

    int inc[n + 6] = {0};
    int de[n + 6] = {0};

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++){
        if(a[i] >= a[i - 1]){
            inc[i] = inc[i - 1] + 1;
        }
        else{
            inc[i] = 1;
        }
    }

    for(int i = 1; i <= n; i++){
        if(a[i] < a[i - 1]){
            de[i] = de[i - 1] + 1;
        }
        else{
            de[i] = 1;
        }
    }

    for(int i = 1; i <= n; i++){
        cout << inc[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        process();
    }
}
