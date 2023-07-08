#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

vector<int> save[1006];
int v, e, x , y;


//void EulerCycle(int u){
//    stack<int> st;
//    st.push(u);
//    vector<int> res;
//    while(st.size()){
//        int x = st.top();
//        int mark = 0;
//        if(save[x].size()){
//            mark = 1;
//            int temp = save[x][0];
//            st.push(temp);
//            for(int i = 0; i < save[temp].size(); i++){
//                if(save[temp][i] == x){
//                    save[temp].erase(save[temp].begin() + i);
//                    break;
//                }
//            }
//
//            save[x].erase(save[x].begin());
//        }
//        if(mark == 0){
//            res.push_back(st.top());
//            st.pop();
//        }
//    }
//
//    for(int i = 0; i < res.size(); i++){
//        cout << res[i] << " ";
//    }
//}

void process(){
    cin >> v >> e;

    for(int i = 1; i <= v; i++){
        save[i].clear();
    }

    for(int i = 0; i < e; i++){
        cin >> x >> y;
        save[x].push_back(y);
        save[y].push_back(x);
    }

    int dem = 0;
    for(int i = 1; i <= v; i++){
        sort(save[i].begin(), save[i].end());
        if(save[i].size() % 2 != 0){
            dem++;
        }
    }

    if(dem == 0){
        cout << "2";
    }
    else if(dem <= 2){
        cout << "1";
    }
    else{
        cout << "0";
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











