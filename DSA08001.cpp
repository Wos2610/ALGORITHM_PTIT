#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

long long n, k, m, x, y;
long long a[M], b[M];

void process(){
    cin >> n;
    deque<int> dq;
    while(n--){
        cin >> m;

        switch (m){
            case 1: {
                cout << dq.size() << "\n";
                break;
            }
            case 2: {
                if(dq.empty()){
                    cout << "YES\n";
                }
                else{
                    cout << "NO\n";
                }
                break;
            }
            case 3: {
                cin >> k;
                dq.push_back(k);
                break;
            }
            case 4: {
                if(dq.size()){
                    dq.pop_front();
                }
                break;
            }
            case 5: {
                if(dq.size()){
                    cout << dq.front() << "\n";
                }
                else{
                    cout << "-1\n";
                }
                break;
            }
            case 6: {
                if(dq.size()){
                    cout << dq.back() << "\n";
                }
                else{
                    cout << "-1\n";
                }
                break;
            }
        }
    }
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}










