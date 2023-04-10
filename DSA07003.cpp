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

    stack<int> st;

    for(int i = 0; i < n; i++){
        if(s[i] == '('){
            st.push(1);
        }
        else if(s[i] == ')'){
            if(st.size()){
                st.pop();
            }
        }
    }

    if(st.size()){
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










