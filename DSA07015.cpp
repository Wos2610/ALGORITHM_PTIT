#include<bits/stdc++.h>

using namespace std;

string s;

int uu(char x)
{
    switch(x)
    {
    case '+':
    {
        return 1;
    }
    case '-':
    {
        return 1;
    }
    case '*':
    {
        return 2;
    }
    case '/':
    {
        return 2;
    }
    }
    return 0;
}

long long cal(char x, long long x1, long long x2)
{
    switch(x)
    {
    case '+':
    {
        return x1 + x2;
    }
    case '-':
    {
        return x2 - x1;
    }
    case '*':
    {
        return x2 * x1;
    }
    case '/':
    {
        return x2/x1;
    }
    }
    return 0;
}

void process()
{
    cin >> s;
    int n = s.size();
    s = s + " ";

    stack<char> st;
    stack<long long> val;
    long long temp = 0;

    for(int i= 0; i < n; i++)
    {
        if(s[i] == '(')
        {
            st.push(s[i]);
        }
        else if(s[i] == ')')
        {
            while(st.size() && st.top() != '(')
            {
                char op = st.top();
                st.pop();
                long long x1 = val.top();
                val.pop();
                long long x2 = val.top();
                val.pop();

                val.push(cal(op, x1, x2));
            }
            st.pop(); // pop (
        }
        else if(isdigit(s[i]))
        {
            temp = temp * 10 + s[i] - '0';
            if(!isdigit(s[i + 1]))
            {
                val.push(temp);
                temp = 0;
            }
        }
        else
        {
            while(st.size() && uu(st.top()) >= uu(s[i]))
            {
                char op = st.top();
                st.pop();
                long long x1 = val.top();
                val.pop();
                long long x2 = val.top();
                val.pop();

                val.push(cal(op, x1, x2));
            }
            st.push(s[i]);
        }
    }

    while(st.size())
    {
        char op = st.top();
        st.pop();
        long long x1 = val.top();
        val.pop();
        long long x2 = val.top();
        val.pop();

        val.push(cal(op, x1, x2));
    }
    cout << val.top() << "\n";
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
