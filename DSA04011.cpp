#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

string a, b;

long long tinh(string a){
    int n = a.size();

    long long res = 0;
    long long temp = 1;
    for(int i = n - 1; i >= 0; i--){
        res += (a[i] - '0') * temp;
        temp *= 2;
    }
    return res;
}
void process(){
    cin >> a >> b;

    cout << tinh(a) * tinh(b);
    cout << "\n";
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        process();
    }
}
