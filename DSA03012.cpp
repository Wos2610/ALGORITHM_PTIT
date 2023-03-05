#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

long long b[M];
vector<int> save;
long long m, n, k, x;
string s;

void process(){
    cin >> s;
    int a[30] = {0};
    n = s.size();

    for(int i = 0; i < n; i++){
        a[s[i] - 'a']++;
    }

    sort(a, a + 26, greater<int>());

    if(2 * a[0] - n > 1){
        cout << "-1";
    }
    else{
        cout << "1";
    }

    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}








