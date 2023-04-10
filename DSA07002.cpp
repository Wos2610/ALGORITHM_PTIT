#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

long long n, k, m, x, y;
long long a[M], b[M];


int main(){
    string s;
    cin >> m;
    deque<int> st, st2;
    while(m--){
        cin >> s;
        if(s == "PUSH"){
            cin >> n;
            st.push_back(n);
        }
        else if(s == "POP"){
            if(st.size()){
                st.pop_back();
            }
        }
        else{
            if(st.size() == 0){
                cout << "NONE";
            }
            else{
                cout << st.back() << " ";
            }
            cout << "\n";
        }
    }
}










