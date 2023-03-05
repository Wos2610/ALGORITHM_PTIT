#include<bits/stdc++.h>
#define M 1000006
#define MOD 1000000007

using namespace std;

string s;
int n, k;
int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int change(string s){
    int res = 0;
    for(int i = 0; i < s.size(); i++){
        res = res * 10 + s[i] - '0';
    }
    return res;
}

int minn(string a){
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '6'){
            a[i] = '5';
        }
    }
    return change(a);
}

int maxx(string a){
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '5'){
            a[i] = '6';
        }
    }
    return change(a);
}

void process(){
    string a,b;
    cin >> a >> b;

    cout << minn(a) + minn(b) << " " << maxx(a) + maxx(b);

}

int main(){
    int T;
    T = 1;
    while(T--){
        process();
    }
}









