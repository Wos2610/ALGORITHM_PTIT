#include <bits/stdc++.h>
using namespace std;

string s;

void process(){
    cin >> s;

    long long n = s.size();

    stack<long long> st;
    long long dem = 0;
    long long res = -1;
    int d[n + 6] = {0};
    st.push(-1);
    for(long long i = 0; i < n; i++){
        if(s[i] == '('){
            st.push(i);
        }
        else{
            st.pop();
            if(st.size() > 0){
                dem = max(dem, i - st.top());
            }
            else{
                st.push(i);
            }
        }
    }



    cout << dem << "\n";
}

int main()
{
    int T ;
    cin >> T;
    while(T--){
        process();
    }
}
