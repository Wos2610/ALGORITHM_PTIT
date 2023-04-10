#include <bits/stdc++.h>
using namespace std;

string s;

void process(){
    cin >> s;

    int n = s.size();

    stack<int> st;
    int x1 = 0;
    int x2 = 0;
    for(int i = 0; i < n; i++){
        if(st.size() >= 2){
            x1 = st.top();
            st.pop();
            x2 = st.top();
            st.pop();
        }
        if(s[i] == '+'){
            st.push(x2 + x1);
        }
        else if(s[i] == '-'){
            st.push(x2 - x1);
        }
        else if(s[i] == '*'){
            st.push(x2 * x1);
        }
        else if(s[i] == '/'){
            st.push(x2 / x1);
        }
        else{
            st.push(x2);
            st.push(x1);
            st.push(s[i] - '0');
        }
    }

    cout << st.top() << "\n";

}

int main()
{
    int T ;
    cin >> T;
    while(T--){
        process();
    }
}
