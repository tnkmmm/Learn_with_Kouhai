#include<bits/stdc++.h>
using namespace std;

//累積和を用いる時、累積和v[0] = 0とかにしておいて、
//i番目をv[i+1]で参照できるようにしておくと1番目の分岐とか書かなくても累積和の構築とか楽になるよっていうお話
//半開区間　累積和

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0;i < N;i++)cin >> A[i];

    //累積和を作っていく　のちの計算を楽にしましょう
    vector<long long> v(N+1,0);
    for(int i = 0;i < N;i++){
        v[i+1] = v[i] + A[i];
    }

    //じゃあ実際に解をもとめていきましょー
    for(int k = 1;k <= N;k++){
        long long total = 0;
        for(int i = 0;i+k<=N;i++){
            long long tmp = v[i+k] - v[i];
            total = max(total, tmp);
        }
        cout << total << endl;

    }

}