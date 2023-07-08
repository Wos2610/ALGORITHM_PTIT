#include<bits/stdc++.h>
#define M 1000006

using namespace std;

int n;
int a[M];

void process()
{
    cin >> n;

    map<int, int> m;
    int r[n + 6];

    a[n + 1] = -1;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        m[a[i]]++;
        r[i] = n + 1;
    }

    stack<int> st;
    st.push(0);

    for(int i = 1; i <= n; i++){
        while(st.size() && m[a[st.top()]] < m[a[i]]){
            r[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }

    for(int i = 1; i <= n; i++){
        cout << a[r[i]] << " ";
    }
    cout << "\n";
}

int main()
{
    int T = 1;
    cin >> T;

    while(T--)
    {
        process();
    }
}
