#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int n;
int a[M];
int maxx[M];

void process(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        maxx[i] = 0;
    }

    stack<int> st;

    st.push(1);

    for(int i = 2; i <= n; i++){
        while(st.size() != 0 && a[i] > a[st.top()]){
            maxx[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }

    for(int i = 1; i <= n; i++){
        if(maxx[i] == 0){
            cout << "-1 ";
        }
        else{
            cout << a[maxx[i]] << " ";
        }
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









