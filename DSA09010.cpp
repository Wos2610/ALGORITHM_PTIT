#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int v, e, x, y;

vector<vector<int>> ke(1006);
int truoc[1006];
int mark[1006];

void BFS(int i){
    queue<int> q;
    q.push(i);

    while(q.size()){
        int k = q.front();
        q.pop();
        mark[k] = 1;

        for(int j = 0; j < ke[k].size(); j++)
        {
            int temp = ke[k][j];
            if(mark[temp] == 0){
                mark[temp] = 1;
                q.push(temp);
            }
        }


    }

}

void process(){
    cin >> v >> e;

    for(int i = 1; i <= v; i++){
        mark[i] = 0;
        ke[i].clear();
    }
    for(int i = 0; i < e; i++){
        cin >> x >> y;
        ke[x].push_back(y);
    }

    int dem = 0;
    for(int i = 1; i <= v; i++){
        if(mark[i] == 0){
            BFS(i);
            dem++;
        }
    }
    if(dem == 1){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        process();
    }
}
