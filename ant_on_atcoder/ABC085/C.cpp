#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    long long int Y;
    cin >> N >> Y;
    int sen = -1, man = -1, gosen = -1;
    
    for(int i = 0;i <= N;i++){
        for(int j = 0;j <= N - i;j++){
            if( Y == (10000*i)+(5000*j)+(1000*(N-i-j))){
                man = i;
                gosen = j;
                sen = N -i -j;
                break;
            }
        }
        if (man != -1)break;
    }
    cout << man << " " << gosen << " " << sen << endl;
}