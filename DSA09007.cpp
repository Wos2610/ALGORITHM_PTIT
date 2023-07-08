#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int v, e, s, t, x, y;

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

        if(k == t){
            vector<int> save;
            while(t != s){
                save.push_back(t);
                t = truoc[t];
            }
            save.push_back(s);

            for(int j = save.size() - 1; j >= 0; j--){
                cout << save[j] << " ";
            }
            cout << "\n";
            return;
        }

        for(int j = 0; j < ke[k].size(); j++)
        {
            int temp = ke[k][j];
            if(mark[temp] == 0){
                truoc[temp] = k;
                mark[temp] = 1;
                q.push(temp);
            }
        }


    }

}

void process(){
    cin >> v >> e >> s >> t;

    for(int i = 1; i <= v; i++){
        mark[i] = 0;
        truoc[i] = 0;
        ke[i].clear();
    }
    for(int i = 0; i < e; i++){
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }

    BFS(s);
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        process();
    }
}
