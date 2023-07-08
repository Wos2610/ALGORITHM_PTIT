#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

string s;
char operatorList[] = {'+', '-', '*', '/', '^', '%'};

void process(){
    cin >> s;
    int n = s.size();
    stack<string> st;

    for(int i = 0; i < n; i++){
        int mark = 0;
        for(int j = 0; j < 6; j++){
            if(s[i] == operatorList[j]){
                if(st.size() >= 2){
                    string s1 = st.top();
                    st.pop();
                    string s2 = st.top();
                    st.pop();
                    string temp = "";
                    temp += s[i];
                    temp += s2;
                    temp += s1;
                    st.push(temp);
                    mark = 1;
                }
            }
        }
        if(mark == 0){
            st.push(string(1, s[i]));
        }
    }

    cout << st.top() << "\n";
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        process();
    }
}
