#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> x(N),y(N);
    double ans = 0.0;
    double tmp = 0.0;

    for(int i = 0;i < N;i++){
        cin >> x[i] >> y[i] ;
    }

    for(int i = 0;i < N;i++){
        for(int j = i+1;j < N;j++){
            tmp = sqrt( pow(x[i] - x[j],2.0) + pow((y[i] - y[j]),2.0) );
            if (ans < tmp) ans = tmp;
        }
    }

    cout << setprecision(10) << ans << endl;

    // for(int i = 0;i < N;i++){
    //     cout << x[i] << y[i] << endl;
    // }

}