#include <bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

string s;

void process()
{
    cin >> s;
    int n = s.size();
    stack<char> st;

    int dem = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            if(st.size() == 0){
                s[i] = '(';
                st.push(s[i]);
                dem++;
            }
            else{
                st.pop();
            }
        }
    }
    dem += st.size() / 2;

    cout << dem << "\n";
}

int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        process();
    }
}
