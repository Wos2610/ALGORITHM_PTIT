#include <bits/stdc++.h>
#define M 1000006
#define MOD 123456789
using namespace std;

int s, d;


void process(){
    cin >> s >> d;

    if(s > 9 * d){
        cout << "-1";
    }
    else{
        stack<int> st;
        while(d--){
            if(s > 9){
                st.push(9);
                s -= 9;
            }
            else if(s > 1){
                st.push(s - 1);
                s = 0;
            }
            else{
                st.push(0);
            }
        }

        int temp = st.top() + 1;
        st.pop();
        cout << temp;
        while(st.size()){
            cout << st.top();
            st.pop();
        }
    }

    cout << "\n";
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        process();
    }
}
