#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<map>
#define M 1000006

using namespace std;

int n, s;
int a[1006][1006];

int main()
{
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }

    int d[n + 6][n + 6] = {0};
    int nex[n + 6][n + 6] = {0};

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 0){
                d[i][j] = M;
                nex[i][j] = 0;
            }
            else{
                d[i][j] = a[i][j];
                nex[i][j] = j;
            }
        }
        d[i][i] = 0;
    }

    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(d[i][j] > d[i][k] + d[k][j]){
                    d[i][j] = d[i][k] + d[k][j];
                    nex[i][j] = nex[i][k];
                }
            }

        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << "K/c " << i << " -> " << j << " = " << d[i][j] << ";  ";
            int k = i;
            while(k != j){
                cout << k << "--> ";
                k = nex[k][j];
            }
            cout << j;
            cout << "\n";
        }
        cout << "\n";
    }
}
