#include<bits/stdc++.h>
#define M 1000006

using namespace std;

string s;

void process()
{
    cin >> s;
    int n = s.size();
    stack<char> st1, st2;

    for(int i = 0; i < n; i++){
        if(s[i] == '<'){
            if(st1.size()){
                st2.push(st1.top());
                st1.pop();
            }
        }
        else if(s[i] == '>'){
            if(st2.size()){
                st1.push(st2.top());
                st2.pop();
            }
        }
        else if(s[i] == '-'){
            if(st1.size()){
                st1.pop();
            }
        }
        else{
            st1.push(s[i]);
        }
    }

    while(st1.size()){
        st2.push(st1.top());
        st1.pop();
    }

    while(st2.size()){
        cout << st2.top();
        st2.pop();
    }

}

int main()
{
    int T = 1;
    //cin >> T;

    while(T--)
    {
        process();
    }
}
