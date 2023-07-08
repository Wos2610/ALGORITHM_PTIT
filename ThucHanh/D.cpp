#include <bits/stdc++.h>
using namespace std;
 
queue<long long> q;
vector<long long> res;
 
// void solve()
// {
//     q.push({4,1});
//     q.push({7,1});
//     while(q.size()!=0)
//     {
//         pair<long long, long long> tmp = q.front();
//         q.pop();
//         res.push_back(tmp.first);
//         if(tmp.second==10)
//         {
//             continue;
//         }
//         q.push({tmp.first*10+4, tmp.second+1});
//         q.push({tmp.first*10+7, tmp.second+1});
//     }
// }
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long a, b;
    cin >> a >> b;
    long long sum = 0;
    q.push(4);
    q.push(7);
    while (true)
    {
        long long x = q.front();
        q.pop();
        if (x > b)
        {
            sum += (b - a + 1) * x;
            break;
        }
        if (x >= a)
        {
            sum += (x - a + 1) * x;
            a = x + 1;
        }
        q.push(x * 10 + 4);
        q.push(x * 10 + 7);
    }
    cout << sum;
}