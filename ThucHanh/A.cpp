#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<map>
#include<stack>
using namespace std;

string s;

void process(){
    cin >> s;
    int n = s.size();

    stack<int> st;

    int m[n + 6] = {0};

    for(int i = 0; i < n; i++){
        m[i] = 2;
    }

    for(int i = 0; i < n; i++){
        if(s[i] == '('){
            st.push(i);
        }
        else if(s[i] == ')'){
            if(st.size()){
                int temp = st.top();
                st.pop();
                m[temp] = 0;
                m[i] = 1;
            }
            else{
                m[i] = -1;
            }
        }
    }

    while(st.size()){
        int temp = st.top();
        m[temp] = -1;
        st.pop();
    }

    for(int i = 0; i < n; i++){
        if(m[i] != 2){
            cout << m[i];
        }
        else{
            cout << s[i];
        }
    }
    cout << "\n";

}

int main(){
    int T = 1;
    cin >> T;
    while(T--){
        process();
    }
}