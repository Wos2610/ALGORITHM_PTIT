#include <bits/stdc++.h>
using namespace std;

string s;

char operatorList[] = {'+', '-', '*', '/', '^', '%'};

void process(){
    cin >> s;

    int n = s.size();

    stack<string> st;

    for(int i = n - 1; i >= 0; i--){
        int mark = 0;
        for(int j = 0; j < 6; j++){
            if(s[i] == operatorList[j]){
                string s1 = st.top();
                st.pop();
                string s2 = st.top();
                st.pop();
                string temp = "";
                temp += s1;
                temp += s2;
                temp += s[i];
                st.push(temp);
                mark = 1;
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
    int T ;
    cin >> T;
    while(T--){
        process();
    }
}
