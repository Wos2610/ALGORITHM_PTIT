#include <bits/stdc++.h>
using namespace std;

string s;

void process(){
    cin >> s;

    int n = s.size();

    stack<char> st;
    long long dem = 0;
    long long res = -1;
    for(int i = 0; i < n; i++){
        if(s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            if(st.size() > 0){
                st.pop();
                dem++;
            }
            res = max(res, dem);
            if(st.size() == 0){
                dem = 0;
            }
        }
    }

    cout << res * 2 << "\n";
}

int main()
{
    int T ;
    cin >> T;
    while(T--){
        process();
    }
}
