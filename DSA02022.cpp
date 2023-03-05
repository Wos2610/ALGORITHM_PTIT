#include<bits/stdc++.h>

using namespace std;

int a[10];

int check(){
    for(int i = 1; i <= 4; i++){
        if(a[5] == 0 || (a[1] == 0 && a[2] == 0) || (a[3] == 0 && a[4] == 0) || (a[3] == a[4] && a[4] == 1) || (a[3] == 1 && a[4] == 0)){
            return 0;
        }
    }
    return 1;
}

void Try(int i){
   if(i == 9){
        if(check()){
            for(int j = 1; j <= 8; j++){
                if(a[j] == 0){
                    cout << "0";
                }
                else{
                    cout << "2";
                }
                if(j == 2 || j == 4){
                    cout << "/";
                }
            }
            cout << "\n";
        }
        return;
   }

   for(int j = 0; j <= 1; j++){
        a[i] = j;
        Try(i + 1);
   }
}


int main(){
   Try(1);
}




