#include<bits/stdc++.h>
#define M 1000006

using namespace std;

int n;
int a[M];

void process()
{
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    stack<int> st1, st2;
    int maxx[n + 6];
    int minn[n + 6];

    for(int i = 1; i <= n; i++){
        maxx[i] = -1;
        minn[i] = M;
    }

    st1.push(1);

    for(int i = 2; i <= n; i++){
        while(st1.size() && a[i] > a[st1.top()]){
            maxx[st1.top()] = i;
            st1.pop();
        }
        st1.push(i);
    }

    st2.push(1);
    for(int i = 2; i <= n; i++){
        while(st2.size() && a[i] < a[st2.top()]){
            minn[st2.top()] = i;
            st2.pop();
        }
        st2.push(i);
    }

    for(int i = 1; i <= n; i++){
        if(maxx[i] == -1 || minn[maxx[i]] == M){
            cout << "-1 ";
        }
        else{
            cout << a[minn[maxx[i]]] << " ";
        }
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
