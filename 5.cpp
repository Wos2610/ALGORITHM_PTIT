#include<iostream>
#include<algorithm>

using namespace std;

int n;
long long t[36], a[36];
long long S, sum, dem, res = 99999999;
void Try(int i){
    for(int j = 0; j < 2; j++){
        if(sum > S){
            break;
        }
        if(dem > res){
            break;
        }
        sum += j * t[i];
        dem += j;

        if(i == n){
            if(sum == S){
                res = min(res, dem);
            }
        }
        else{
            Try(i + 1);
        }
        dem -= j;
        sum -= j * t[i];
    }
}

void process(){
    cin >> n >> S;
    for(int i = 1; i <= n; i++){
        cin >> t[i];
    }
    sum = 0;
    dem = 0;
    Try(1);
    if(res > n){
        cout << "-1";
    }
    else{
        cout << res;
    }

}

int main(){
    process();
}
