#include<bits/stdc++.h>

using namespace std;

void process()
{
    string s;
    cin >> s;
    int n = s.size();

    stack<int> st;
    for(int i = 0; i < n; i++){
        if(s[i] >= '0' && s[i] <= '9'){
            st.push(s[i] - '0');
        }
        else{
            if(st.size()){
                int x1 = st.top();
                st.pop();
                int x2 = st.top();
                st.pop();
                switch(s[i]){
                    case '+':{
                        st.push(x2 + x1);
                        break;
                    }
                    case '-':{
                        st.push(x2 - x1);
                        break;
                    }
                    case '*':{
                        st.push(x2 * x1);
                        break;
                    }
                    case '/':{
                        st.push(x2 / x1);
                        break;
                    }

                }
            }

        }
    }

    cout << st.top() << "\n";
}

int main()
{
    int T = 1;
    cin >> T;

    while(T--)
    {
        process();
    }
}
