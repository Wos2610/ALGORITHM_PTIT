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

    stack<string> st;

    string temp = "";
    if(s[0] != ' '){
        temp += s[0];
    }
    for(int i = 1; i < n; i++){
        if(s[i] == ' '){
            if(s[i - 1] != ' '){
                st.push(temp);
                temp = "";
            }
        }
        else{
            temp += s[i];
        }
    }

    if(temp != ""){
        st.push(temp);
    }
    while(st.size() > 0){
        cout << st.top() << " ";
        st.pop();
    }
    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    cin.ignore();
    while(T--){
        process();
    }
}










