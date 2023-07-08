#include <bits/stdc++.h>
using namespace std;
#define M 1000006
#define MOD 1000000007

int n;
int a[M];

void process(){
    cin >> n;
    int r[n + 6], l[n + 6];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        r[i] = n + 1;
        l[i] = 0;
    }

    stack<int> st1, st2;

    st1.push(0);
    for(int i = 1 ; i <= n; i++){
        while(st1.size() && a[i] < a[st1.top()]){
            r[st1.top()] = i;
            st1.pop();
        }
        st1.push(i);
    }

    st2.push(n + 1);
    for(int i = n ; i >= 1; i--){
        while(st2.size() && a[i] < a[st2.top()]){
            l[st2.top()] = i;
            st2.pop();
        }
        st2.push(i);
    }

    int res = 0;
    for(int i = 1; i <= n; i++){
       if(r[i] - l[i] - 1 >= a[i]){
            res = max(res, a[i]);
       }
    }

    cout << res << "\n";


}

int main()
{
    int T;
    cin >> T;
    while(T--){
        process();
    }
}
