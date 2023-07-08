#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int n;
string s;
int a[M];
int maxx[M];

char m1[] = {'(', '[', '{'};
char m2[] = {')', ']', '}'};

void process(){
    cin >> s;
    int n = s.size();
    stack<char> st;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            if(s[i] == m1[j]){
                st.push(s[i]);
            }
            if(s[i] == m2[j]){
                if(st.size() != 0 && st.top() == m1[j]){
                    st.pop();
                }
            }
        }
    }

    if(st.size() == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    cout << "\n";

}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}









