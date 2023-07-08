#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<int> st;
        int pos = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'D')
            {
                if (i == 0 || s[i - 1] == 'I')
                {
                    st.push(pos + 1);
                    pos++;
                }
                st.push(pos + 1);
                pos++;
            }
            else
            {
                while (st.size())
                {
                    cout << st.top();
                    st.pop();
                }
                if (i == 0)
                {
                    cout << pos + 1;
                    pos++;
                }
                if (s[i + 1] != 'D')
                {
                    cout << pos + 1;
                    pos++;
                }
            }
        }
        while (st.size())
        {
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }
}
