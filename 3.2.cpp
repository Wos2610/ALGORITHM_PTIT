#include<bits/stdc++.h>
#define M 1000006

using namespace std;

int n;
int a[1006][1006];
int mark[M];

int main(){
    cin >> n;

    for(int i = 1;i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }

    stack<int> st;

    st.push(1);
    mark[1] = 1;
    cout << "1 ";
    while(st.size()){
        int u = st.top();
        st.pop();
        for(int v = 1; v <= n; v++){
            if(a[u][v] == 1 && mark[v] == 0){
                cout << v << " ";
                mark[v] = 1;
                st.push(u);
                st.push(v);
                break;
            }
        }
    }
}
