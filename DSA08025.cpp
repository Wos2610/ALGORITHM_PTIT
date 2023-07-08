#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

string st, en;
int u, v;
int x[] = {-2, -1, -2, -1, 2, 1, 2 , 1};
int y[] = {-1, -2, 1, 2, -1, -2, 1, 2};

struct Point{
    int i;
    int j;
    int d;
};

void process(){
    cin >> st >> en;
    u = en[0] - 'a' + 1;
    v = en[1] - '0';

    map<pair<int, int>, int> mark;

    queue<Point> q;
    q.push({st[0] - 'a' + 1, st[1] - '0', 0});

    while(q.size()){
        int tempX = q.front().i;
        int tempY = q.front().j;
        int tempD = q.front().d;
        q.pop();
        mark[{tempX, tempY}] = 1;
        if(tempX == u && tempY == v){
            cout << tempD << "\n";
            return;
        }
        for(int k = 0; k < 8; k++){
            if(mark[{tempX + x[k], tempY + y[k]}] == 0 && tempX + x[k] >= 1 && tempX + x[k] <= 8 && tempY + y[k] >= 1 && tempY + y[k] <= 8){
                q.push({tempX + x[k], tempY + y[k], tempD + 1});
            }
        }

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
