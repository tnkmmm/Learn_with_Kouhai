#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.length()-1;
    long long sum = 0;

    for(int bit = 0; bit < (1<<n);bit++){
        int start = 0;
        int stop = n+1;
        for(int i = 0;i < n;i++){
            if(bit & (1<<i)){//+が挿入されているかどうかをandで確認
                stop = i+1;//+で区切られてる左側

                //cout << s.substr(start,stop-start) << endl;

                //部分文字列を取得してlong longに変換
                sum += atoll(s.substr(start,stop-start).c_str());
                //+の右側から開始できるように更新
                start = stop;
            }
        }

        //cout << s.substr(start,n+1-start) << endl;
        
        //最後の区切りをここで加算
        sum += atoll(s.substr(start,n+1-start).c_str());
    }
    
    cout << sum << endl;
}