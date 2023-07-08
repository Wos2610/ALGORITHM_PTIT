#include <bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

int a[M];
int n, s;

void process()
{
    cin >> n >> s;

    int mark[100006] = {0};
    mark[0] = 1;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++){
        for(int j = s; j >= a[i]; j--){
            if(mark[j - a[i]] == 1){
                mark[j] = 1;
            }
        }
    }

    if(mark[s] == 1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    cout << "\n";
}

int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        process();
    }
}
