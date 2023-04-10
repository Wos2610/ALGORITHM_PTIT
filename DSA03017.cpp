#include <bits/stdc++.h>
using namespace std;

int k;
string s;

void process(){
    cin >> k;
    cin >> s;

    int n = s.size();
    long long res = 0;
    long long d[30] = {0};
    for(int i = 0; i < n; i++){
        d[s[i] - 'A']++;
    }

    priority_queue<long long> pq;
    for(int i = 0; i < 26; i++){
        pq.push(d[i]);
    }

    while(k > 0){
        long long temp = pq.top();
        pq.pop();
        temp--;
        pq.push(temp);
        k--;
    }

    while(pq.size() != 0){
        long long temp = pq.top();
        pq.pop();
        res += temp * temp;
    }
    cout << res << "\n";
}

int main()
{
    int T ;
    cin >> T;
    while(T--){
        process();
    }
}
