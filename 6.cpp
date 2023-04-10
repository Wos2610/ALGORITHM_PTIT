#include <bits/stdc++.h>
using namespace std;
long long n, k;
int a[50];

long long dq(long long m, long long k, long long res){
    if(m == 0){
        return 1;
    }
    if(m == 1){
        return 0;
    }
    if(k <= a[m - 2]){
        return dq()
    }
    else{
        return dq(m - 1, k - a[m - 2], r);
    }

}
void process(){
    cin >> n >> k;
    map<long long, int> length;

}
int main()
{
    int T;
    cin >> T;

    a[0] = 1;
    a[1] = 1;
    for(int i = 2; i <= 46; i++){
        a[i] = a[i - 1] + a[i - 2];
    }
    while (T--)
        process();
}
