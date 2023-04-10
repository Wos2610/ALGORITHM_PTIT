#include <bits/stdc++.h>
using namespace std;

string s;

void process(){
    cin >> s;

    int n = s.size();

    stack<int> st;
    int x1 = 0;
    int x2 = 0;
    for(int i = n - 1; i >= 0; i--){
        if(st.size() >= 2){
            x2 = st.top();
            st.pop();
            x1 = st.top();
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
            st.push(x1);
            st.push(x2);
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
