#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int n;
long long a[M];
void process(){
    cin >> n;
    long long r[n + 6] = {0};
    long long l[n + 6] = {0};

    for(int i = 1; i <= n; i++){
        cin >> a[i];
        r[i] = n + 1;
        l[i] = 0;
    }

    stack<int> st1, st2;

    st1.push(n + 1);

    for(int i = 1; i <= n; i++){
        while(st1.size() && a[i] < a[st1.top()]){
            r[st1.top()] = i;
            st1.pop();
        }
        st1.push(i);
    }

    st2.push(0);
    for(int i = n; i >= 1; i--){
        while(st2.size() && a[i] < a[st2.top()]){
            l[st2.top()] = i;
            st2.pop();
        }
        st2.push(i);
    }

    long long res = 0;
    for(int i = 1; i <= n; i++){
        //cout << r[i] << " " << l[i] << " " << abs(r[i] - l[i] - 1) * a[i] << "\n";
        res = max(res, abs(r[i] - l[i] - 1) * a[i]);
    }

    cout << res << "\n";
}

int main(){
    int T;
    cin >> T;

    while(T--){
        process();
    }
}
