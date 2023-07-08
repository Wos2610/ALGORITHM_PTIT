#include<bits/stdc++.h>
#define M 1000006

using namespace std;

string s;
int a[M];
int m, n;
int mp[M];
vector<pair<int, int>> save;
vector<string> res;
map<string, int> mk;

void Try(int i){
    if(i == m + 1){
        int mark = 0;
        for(int j = 1; j <= m; j++){
            if(a[j] == 0){
                mark = 1;
            }
        }
        if(mark == 1){
            for(int j = 1; j <= m; j++){
                if(a[j] == 0){
                    mp[save[j - 1].first] = 1;
                    mp[save[j - 1].second] = 1;
                }
            }

            string temp = "";
            for(int j = 0; j < n; j++){
                if(mp[j] == 0){
                    temp += s[j];
                }
                else{
                    mp[j] = 0;
                }
            }
            if(mk[temp] == 0){
                res.push_back(temp);
                mk[temp] = 1;
            }
        }
        return;
    }
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        Try(i + 1);
    }
}

void process()
{
    cin >> s;
    n = s.size();
    stack<char> st;

    for(int i = 0; i < n; i++){
        if(s[i] == '('){
            st.push(i);
        }
        else if(s[i] == ')'){
            save.push_back({st.top(), i});
            st.pop();
        }
    }

    m = save.size();
    Try(1);
    sort(res.begin(), res.end());

    for(auto i : res){
        cout << i << "\n";
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
