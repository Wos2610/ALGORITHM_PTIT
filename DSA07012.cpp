#include<bits/stdc++.h>

using namespace std;

void process()
{
    string s;
    cin >> s;

    int n = s.size();
    stack<string> st;

    for(int i = 0; i < n; i++){
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')){
            string temp = "";
            temp += s[i];
            st.push(temp);
        }
        else{
            if(st.size() >= 2){
                string x1 = st.top();
                st.pop();
                string x2 = st.top();
                st.pop();

                string temp = "(";
                temp += x2;
                temp += s[i];
                temp += x1;
                temp += ")";
                st.push(temp);
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
