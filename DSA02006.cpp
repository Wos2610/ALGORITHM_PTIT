#include<bits/stdc++.h>

using namespace std;

int a[1006], b[1006];
int n, k, mark;
vector<int> save;

void Try(int i){
    if(i == n + 1){
        int sum = 0;
        for(int j = 1; j <= n; j++){
           if(a[j]){
                save.push_back(j);
                sum += b[j];
           }
        }

        if(sum == k){
            mark = 1;
            cout << "[";
            for(int j = 0; j < save.size(); j++){
                cout << b[save[j]];
                if(j == save.size() - 1){
                    cout << "]";
                }
                else{
                    cout << " ";
                }
            }
            cout << " ";
        }
        save.clear();
        return;
    }

    for(int j = 1; j >= 0; j--){
        a[i] = j;
        Try(i + 1);
    }
}

void process(){
    mark = 0;
    cin >> n >> k;

    for(int i = 1; i <= n; i++){
        cin >> b[i];
    }

    sort(b + 1, b + 1 + n);

    Try(1);

    if(mark == 0){
        cout << "-1";
    }
    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
}




