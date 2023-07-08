#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

long long n, k, m, x, y;
long long a[M], b[M];

void process(){
    string s;
    getline(cin, s);
    int n = s.size();

    stack<char> st;
    int mark = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            if(st.top() == '('){
                mark = 1;
                break;
            }
            while(st.size()){
                char temp = st.top();
                st.pop();
                if(temp == '('){
                    break;
                }
            }
        }
    }

    if(mark){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
}

int main(){
    int T;
    cin >> T;
    cin.ignore();
    while(T--){
        process();
    }
}










