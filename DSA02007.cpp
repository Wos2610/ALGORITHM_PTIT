#include <bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;
int k;
string s;

int change(string s){
    int temp = 0;
    int n = s.size();

    for(int i = 0; i < n; i++){
        temp = temp * 10 + (s[i] - '0');
    }
    return temp;
}

void process()
{
   cin >> k;
   cin >> s;


}

int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        process();
    }
}
