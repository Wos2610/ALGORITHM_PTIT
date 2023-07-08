#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

void process()
{
    long long n;
    cin >> n;

    vector<string> a;
    a.push_back("0");
    a.push_back("1");
    int m = 1;
    int b = 0;
    int e = 1;
    int k = 1;

    while(m < n)
    {
        for(int i = b; i <= e; i++){
            a.push_back("0" + a[i]);
        }
        for(int i = e; i >= b; i--){
            a.push_back("1" + a[i]);
        }

        k *= 2;
        b += k;
        e += k * 2;
        m++;
    }

    for(auto i : a){
        if(i.size() == n) cout << i << " ";
    }
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











