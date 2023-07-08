#include<bits/stdc++.h>

using namespace std;

void process()
{
    string s;
    cin >> s;
    int n = s.size();

    stack<int> st;

    for(int i = n - 1; i >= 0; i--){
        if(s[i] >= '0' && s[i] <= '9'){
            st.push(s[i] - '0');
        }
        else{
            if(st.size() >= 2){
                int x1 = st.top();
                st.pop();
                int x2 = st.top();
                st.pop();
                switch(s[i]){
                    case '+': {
                        st.push(x1 + x2);
                        break;
                    }
                    case '-': {
                        st.push(x1 - x2);
                        break;
                    }
                    case '*': {
                        st.push(x1 * x2);
                        break;
                    }
                    case '/': {
                        st.push(x1 / x2);
                        break;
                    }
                }
            }
        }
    }

    cout << st.top() << "\n";
}

int main()
{
    int T = 1;
    cin >> T;

    while(T--)
    {
        process();
    }
}
