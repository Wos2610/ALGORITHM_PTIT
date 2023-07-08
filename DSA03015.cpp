#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

int n, s, m;
int a[M], b[M];

int check()
{
    if(n < m)
    {
        return -1;
    }

    int sum = 0;
    int s1 = s;
    while(s > 0)
    {
        if(s >= 7)
        {
            sum += n * 6 - m * 7;
            s -= 7;
        }
        else
        {
            sum += n * s - m * s;
            s = 0;
        }
        if(sum < 0)
        {
            return -1;
        }
    }

    if((m * s1) % n == 0){
        return m * s1 / n;
    }
    return ((m * s1) / n) + 1;
}

void process()
{
    cin >> n >> s >> m;
    cout << check();
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









