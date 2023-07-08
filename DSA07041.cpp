#include <bits/stdc++.h>
using namespace std;
#define M 1000006
#define MOD 1000000007

string s;
void process(){
    cin >> s;
    int n = s.size();

    stack<char> st;
    int res = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == '('){
            st.push(i);
        }
        else{
            if(st.size()){
                res += 2;
                st.pop();
            }
        }
    }

    cout << res;

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
