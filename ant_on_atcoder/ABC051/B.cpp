#include <bits/stdc++.h>
using namespace std;

int main(){
    int n_max,sum;
    cin >> n_max >> sum ;

    int x,y,z,count = 0;

    for(x = 0;x <= n_max;x++){
        for(y = 0;y <= n_max; y++){
            if(0 <= sum - x - y  && sum - x - y <= n_max)count++;
        }
    }

    cout << count << endl;
}