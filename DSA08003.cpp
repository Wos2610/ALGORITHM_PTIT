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
        if(s == "PUSHBACK"){
            cin >> n;
            st.push_back(n);
        }
        else if(s == "PUSHFRONT"){
            cin >> n;
            st.push_front(n);
        }
        else if(s == "POPFRONT"){
            if(st.size()){
                st.pop_front();
            }
        }
        else if(s == "POPBACK"){
            if(st.size()){
                st.pop_back();
            }
        }
        else if(s == "PRINTBACK"){
            if(st.size() == 0){
                cout << "NONE";
            }
            else{
                cout << st.back() << " ";
            }
            cout << "\n";
        }
        else{
            if(st.size() == 0){
                cout << "NONE";
            }
            else{
                cout << st.front() << " ";
            }
            cout << "\n";
        }
    }
}










