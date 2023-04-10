#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

long long n, k, m, x, y;
long long a[M], b[M];

void process(){
    cin >> n;

    deque<long long> dq;
    dq.push_back(6);
    dq.push_back(8);
    stack<long long> st;
    while(1){
        long long temp = dq.front();
        dq.pop_front();
        if(temp < b[n]){
            st.push(temp);
            dq.push_back(temp * 10 + 6);
            dq.push_back(temp * 10 + 8);
        }
        else{
            break;
        }
    }

    cout << st.size() << "\n";
    while(st.size()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << "\n";
}

int main(){
    int T;
    cin >> T;

    a[1] = 1;
    b[1] = 10;
    for(int i = 2; i <= 15; i++){
        a[i] = a[i - 1] * 10;
        b[i] = b[i - 1] * 10;
    }
    while(T--){
        process();
    }
}










