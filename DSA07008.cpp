#include<bits/stdc++.h>

using namespace std;

int uuTien(char c)
{
    switch(c)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    default:
        return -1;
    }
}

void process()
{
    string s;
    cin >> s;

    int n = s.size();
    stack<char> st;

    for(int i = 0; i < n; i++)
    {
        if((s[i] >= 'A' && s[i] <= 'Z') || s[i] >= 'a' && s[i] <= 'z' || s[i] >= '1' && s[i] <= '9')
        {
            cout << s[i];
        }
        else if(s[i] == '(')
        {
            st.push(s[i]);
        }
        else if(s[i] == ')')
        {
            while(st.size() && st.top() != '(')
            {
                cout << st.top();
                st.pop();
            }
            if(st.size() && st.top() == '(')
            {
                st.pop(); // pop '('
            }

        }
        else
        {
            while(st.size() && st.top() != '(' && uuTien(st.top()) >= uuTien(s[i]))
            {
                cout << st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while(st.size() && st.top() != '(')
    {
        cout << st.top();
        st.pop();
    }
    cout << "\n";
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
