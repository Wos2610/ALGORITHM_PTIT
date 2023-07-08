#include<bits/stdc++.h>

using namespace std;
int n, d;
int a[1006][1006];

void Try(int i, int j, string s){
    if(i == n && j == n){
        cout << s << " ";
        d = 1;
        return;
    }
    if(i < 1 || i > n || j < 1 || j > n) return;

    if(a[i + 1][j] == 1){
        Try(i + 1, j, s + 'D');
    }

    if(a[i][j + 1] == 1){
        Try(i, j + 1, s + 'R');
    }
}
void process()
{
    cin >> n;
    d = 0;
    for(int i = 0; i <= n + 1; i++)
    {
        for(int j = 0; j <= n + 1; j++)
        {
            a[i][j] = 0;
        }
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }

    if(a[1][1] == 0 || a[n][n] == 0){
        cout << "-1\n";
        return;
    }

    Try(1, 1, "");

    if(d == 0) cout << "-1\n";
    cout << "\n";
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        process();
    }
}




