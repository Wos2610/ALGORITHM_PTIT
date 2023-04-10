#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

int n, k, T1, T;
int a[M], b[M];

void process(){
    string s;
    cin >> k >> s;
    int n = s.size();
    s = "0" + s;

    int i = n - 1;
    while(i > 0 && s[i] >= s[i + 1]){
        i--;
    }

    cout << T1 - T << " ";
    if(i == 0){
        cout << "BIGGEST\n";
        return;
    }

    int j = n;
    while(j > 0 && s[j] <= s[i]){
        j--;
    }

    swap(s[j], s[i]);

    sort(s.begin() + 1 + i , s.begin() + 1 + n);

    s.erase(0, 1);
    cout << s << "\n";

}

int main(){
    //int T;
    cin >> T;
    T1 = T;
    while(T--){
        process();
    }
}









