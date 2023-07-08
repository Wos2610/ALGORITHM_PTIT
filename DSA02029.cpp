#include <bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

int n;
void chuyen(int i, int j){
    cout << (char)(i - 1 + 'A') << " -> " << (char)(j - 1 + 'A') << "\n";
}

void Try(int n, int i, int j, int k){
    if(n == 1){
        chuyen(i, k);
    }
    else if(n == 2){
        chuyen(i, j);
        chuyen(i, k);
        chuyen(j, k);
    }
    else{
        Try(n - 1, i, k, j);
        chuyen(i, k);
        Try(n - 1, j, i, k);
    }
}

void process()
{
    cin >> n;

    Try(n, 1, 2, 3);
}

int main()
{
    int T = 1;
    //cin >> T;
    while (T--)
    {
        process();
    }
}
