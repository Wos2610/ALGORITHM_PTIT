#include <bits/stdc++.h>
using namespace std;
#define M 1000006
#define MOD 1000000007

string s1, s2;
int maxx, minn = M;
int d[10006];

void change(string s){
    int n = s.size();

    int mu = 0, num = 0, temp = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == ' '){
            if(s[i + 1] == '+'){
                mu = temp;
                maxx = max(maxx, mu);
                minn = min(minn, mu);
                temp = 0;
                d[mu] += num;
                mu = 0;
                num = 0;
            }
        }
        else if(s[i] >= '0' && s[i] <= '9'){
            temp = temp * 10 + s[i] - '0';
        }
        else if(s[i] == '*'){
            num = temp;
            temp = 0;
        }
    }

    if(num != 0){
        mu = temp;
        maxx = max(maxx, mu);
        minn = min(minn, mu);
        temp = 0;
        d[mu] += num;
    }


}

void process(){
    getline(cin, s1);
    getline(cin, s2);

    change(s1);
    change(s2);

    for(int i = maxx; i >= 0; i--){
        if(d[i] != 0){
            cout << d[i] << "*x^" << i;
            if(i != minn) cout << " + ";
        }
        d[i] = 0;
    }
    cout << "\n";
}

int main()
{
    int T;
    cin >> T;
    cin.ignore();
    while(T--){
        process();
    }
}
