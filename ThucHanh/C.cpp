#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <stack>
#define M 1000000
using namespace std;

int n, m;
vector<long long> h;
vector<int> pre, nex;
long long res = 0;

void find(){
    stack<int> st;
    for(int i = n - 1; i >= 0; i--){
        while(st.size() && h[st.top()] >= h[i]){
            st.pop();
        }
        if(st.size() == 0) nex[i] = n;
        else{
            nex[i] = st.top();
        }
        st.push(i);
    }
    while(st.size()){
        st.pop();
    }

    for(int i = 0; i < n; i++){
        while(st.size() && h[st.top()] >= h[i]){
            st.pop();
        }
        if(st.size() == 0) pre[i] = -1;
        else{
            pre[i] = st.top();
        }
        st.push(i);
    }

    for(int i = 0; i < n; i++){
        long long w = nex[i] - pre[i] - 1;
        long long area = h[i] * w;
        res = max(res, area);
    }

}



void process()
{
    cin >> m >> n;

    h.resize(n);
    pre.resize(n);
    nex.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }


    find();

    for (int i = 0; i < n; i++)
    {
        h[i] = m - h[i];
    }

    find();

    cout << res;

}

int main()
{
    int T = 1;
    // cin >> T;
    while (T--)
    {
        process();
    }
}