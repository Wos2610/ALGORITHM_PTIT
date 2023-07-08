#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<map>
#define M 1000006

using namespace std;

int n, s;
int a[1006][1006];
int d[M], truoc[M];

int main()
{
    cin >> n >> s;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }

    for(int i = 1; i <= n; i++)
    {
        if(i == s)
        {
            d[i] = 0;
        }
        else
        {
            if(a[s][i])
            {
                d[i] = a[s][i];
            }
            else
            {
                d[i] = 999999;
            }
        }
        truoc[i] = s;
    }

    for(int k = 1; k <= n - 2; k++)
    {
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(a[j][i] != 0 && d[i] > d[j] + a[j][i])
                {
                    d[i] = d[j] + a[j][i];
                    truoc[i] = j;
                }
            }
        }
    }

    for(int i = 1; i <= n; i++)
    {
        cout << "K/c " << s << " -> " << i << " = ";
        if(d[i] == 999999){
            cout << "INF;  ";
        }
        else{
            cout << d[i] << ";  ";
        }

        if(i == s){
            cout << i << " <- ";
        }

        if(d[i] != 999999){
            int j = i;
            while(j != s){
                cout << j << " <- ";
                j = truoc[j];
            }
            cout << s;
        }
        cout << "\n";
    }
}
