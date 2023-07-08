#include <bits/stdc++.h>
using namespace std;
#define M 1000006
#define MOD 1000000007

int n;
int a[M];
void process(){
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    stack<int> st;

    st.push(0);
    for(int i = 1; i <= n; i++){
        while(st.size() > 1 && a[st.top()] <= a[i]){ // > 1 de phong truong hop cac phan tu bang nhau
            st.pop();
        }

        if(st.size()){
            cout << i - st.top() << " ";
        }
        st.push(i);
    }
    cout << "\n";
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        process();
    }
}
