#include<bits/stdc++.h>

using namespace std;

int a[1006], mark[1006];
vector<char> save;
int n, d;
string s;

void Try(int i){
   if(i == n + 1){
        for(int j = 1; j <= n; j++){
            cout << s[a[j]];
        }
        cout << " ";
        return;
   }

   for(int j = 1; j <= n; j++){
        if(!mark[j]){
            a[i] = j;
            mark[j] = 1;
            Try(i + 1);
            mark[j] = 0;
        }
   }
}

void process(){
    cin >> s;
    n = s.size();

    s = " " + s;

    sort(s.begin() + 1, s.begin() + n);

    Try(1);
    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}




