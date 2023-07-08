#include <bits/stdc++.h>
using namespace std;
#define M 1000006
#define MOD 1000000007

string s1, s2;

string change(string s){
    int n = s.size();

    stack<char> st;
    stack<char> d;

    for(int i = 0; i < n; i++){
        if(s[i] == '('){
            if(i == 0){
                d.push('+');
            }
            else{
                d.push(s[i - 1]);
            }
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            string temp = "";
            while(st.size() >= 2){
                char x = st.top();
                st.pop();
                char y = st.top();
                st.pop();

                temp = x + temp;
                if(d.top() == '-'){
                    if(y == '-'){
                        temp = '+' + temp;
                    }
                    else{
                        temp = '-' + temp;
                    }
                }
                else{
                    temp = y + temp;
                }

                if(y == '('){
                    for(int j = 1; j < temp.size(); j++){
                        st.push(temp[j]);
                    }
                    break;
                }
            }
            d.pop();
        }
        else{
            st.push(s[i]);
        }
    }

    string res = "";
    while(st.size()){
        res = st.top() + res;
        st.pop();
    }
    return res;
}

void process(){
    cin >> s1 >> s2;
    string x1 = change(s1);
    string x2 = change(s2);
    if(x1 == x2){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        process();
    }
}
