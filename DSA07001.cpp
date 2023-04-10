#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

long long n, k, m, x, y;
long long a[M], b[M];


int main(){
    string s;
    deque<int> st, st2;
    while(cin >> s){
        if(s == "push"){
            cin >> n;
            st.push_back(n);
        }
        else if(s == "pop"){
            st.pop_back();
        }
        else{
            st2 = st;
            if(st.size() == 0){
                cout << "empty";
            }

            while(st2.size()){
                cout << st2.front() << " ";
                st2.pop_front();
            }
            cout << "\n";
        }

    }
}










