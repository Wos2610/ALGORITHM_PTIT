#include<bits/stdc++.h>
#define M 1000006

using namespace std;

int a[106][106];
void EulerCycle(int n, int u){
    stack<int> st;
    vector<int> save;
    st.push(u);
    while(st.size()){
        int temp = st.top();
        int mark = 0;
        for(int i = 1; i <= n; i++){
            if(a[temp][i]){
                st.push(i);
                a[temp][i] = 0;
                a[i][temp] = 0;
                mark = 1;
                break;
            }
        }
        if(!mark){
            save.push_back(st.top());
            st.pop();
        }
    }

    for(int i = save.size() - 1; i >= 0; i--){
        cout << save[i] << " ";
    }
}

int main(){
    int n = 0, u = 0;
    cin >> n;
    cin >> u;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }

    EulerCycle(n, u);
}
