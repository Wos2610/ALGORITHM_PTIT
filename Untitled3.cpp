#include <bits/stdc++.h>
#define endl "\n"
#define M 1000006
#define MAX 10e18

using namespace std;
long long a, b;

deque<long long> dq;

int main()
{
    cin >> a >> b;

    vector<long long> save;
    dq.push_back(4);
    dq.push_back(7);
    while(dq.size())
    {
        long long temp = dq.front();
        dq.pop_front();
        save.push_back(temp);
        if(temp >= b){
            break;
        }
        if(temp * 10 + 4 <= b * 10 + 4)
        {
            dq.push_back(temp * 10 + 4);
        }
        if(temp * 10 + 7 <=  b * 10 + 4)
        {
            dq.push_back(temp * 10 + 7);
        }
    }

    int index = -1;
    for(int i = 0; i < save.size(); i++){
        if(save[i] >= a){
            index = i;
            break;
        }
    }

    long long sum = 0;
    long long beg = a;
    long long en = save[index];
    while(beg <= b + 1){
        sum += (en - beg + 1) * en;
        beg = en + 1;
        index++;
        en = save[index];
    }
    cout << sum;
}
