#include <bits/stdc++.h>
using namespace std;

//累積和

int main(){
    int N;
    string S;
    cin  >> N >> S;
    vector<int> West(N+1,0) , East(N+1,0);

    for(int i = 0;i < N;i++){
        West[i+1] += West[i];
        if(S[i] == 'W')West[i+1] += 1;
        East[i+1] += East[i];
        if(S[i] == 'E')East[i+1] += 1;
    }
    int ans = INT32_MAX;
    int tmp = 0;

    for(int i = 0;i < N;i++){
        tmp = West[i] + (East[N] - East[i+1]);
        if(ans > tmp) ans = tmp;
    }

    cout << ans << endl;
}